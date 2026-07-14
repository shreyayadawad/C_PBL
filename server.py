import http.server
import socketserver
import subprocess
import re
import os
import webbrowser

PORT = 8000

class AdvancedCGIRequestHandler(http.server.SimpleHTTPRequestHandler):
    def do_GET(self):
        if self.path == "/" or self.path == "/index.html":
            self.send_response(200)
            self.send_header("Content-Type", "text/html")
            self.end_headers()
            self.wfile.write(self.get_upload_page_html().encode("utf-8"))
        else:
            super().do_GET()

    def do_POST(self):
        if self.path == "/analyze":
            content_length = int(self.headers['Content-Length'])
            post_data = self.rfile.read(content_length)
            
            try:
                body = post_data.decode('utf-8', errors='ignore')
                lines = body.splitlines()
                resume_text = ""
                capture = False
                
                for line in lines:
                    if "Content-Type:" in line:
                        capture = True
                        continue
                    if capture and "------" in line:
                        capture = False
                    if capture:
                        resume_text += line + "\n"
            except Exception:
                resume_text = body

            # --- ADVANCED DYNAMIC PARSING SECTION ---
            student_name = "Candidate Profile"
            match_name = re.search(r'(?:Name|NAME|Candidate)\s*:\s*([^\n]+)', resume_text)
            if match_name:
                student_name = match_name.group(1).strip()
            else:
                first_line = [l.strip() for l in resume_text.split("\n") if l.strip()]
                if first_line:
                    student_name = first_line[0][:30]

            cgpa = 7.0
            match_cgpa = re.search(r'(?:CGPA|GPA|Pointer)\s*:\s*([0-9.]+)', resume_text, re.IGNORECASE)
            if match_cgpa:
                try:
                    cgpa = float(match_cgpa.group(1))
                except ValueError:
                    pass

            text_lower = resume_text.lower()
            
            # 1. Web Dev Foundations Scorer
            web_keywords = ["html", "css", "javascript", "react", "node", "web dev", "frontend", "backend"]
            web_matches = sum(1 for kw in web_keywords if kw in text_lower)
            skill_prog = min(30 + (web_matches * 15), 100)
            
            # 2. DSA Scorer
            dsa_keywords = ["dsa", "data structures", "algorithms", "binary tree", "sorting", "recursion", "complexity"]
            dsa_matches = sum(1 for kw in dsa_keywords if kw in text_lower)
            skill_dsa = min(25 + (dsa_matches * 15), 100)
            
            # 3. Communication Scorer
            comm_keywords = ["communication", "leadership", "english", "presentation", "collaborative", "verbal"]
            comm_matches = sum(1 for kw in comm_keywords if kw in text_lower)
            skill_comm = min(30 + (comm_matches * 15), 100)
            
            # 4. Quantitative Aptitude Scorer
            apt_keywords = ["aptitude", "quantitative", "mathematics", "logical reasoning", "analytics", "statistics"]
            apt_matches = sum(1 for kw in apt_keywords if kw in text_lower)
            skill_apt = min(30 + (apt_matches * 15), 100)
            
            # 5. Project Value Tracker
            project_score = min(30 + (20 * text_lower.count("project")), 100)
            
            # 6. Practical Industry Experience
            experience_score = min(20 + (30 * text_lower.count("internship")), 100)

            # --- EXECUTE C BACKEND BINARY ---
            try:
                exe_path = "./cgi-bin/analyzer"
                if os.name == "nt":
                    exe_path = "./cgi-bin/analyzer.exe"
                
                cmd = [
                    exe_path,
                    student_name,
                    str(cgpa),
                    str(skill_prog),
                    str(skill_dsa),
                    str(skill_comm),
                    str(skill_apt),
                    str(project_score),
                    str(experience_score)
                ]
                
                result = subprocess.run(cmd, capture_output=True, text=True, check=True)
                
                self.send_response(200)
                output_parts = result.stdout.split("\n\n", 1)
                body_to_write = output_parts[1] if len(output_parts) > 1 else result.stdout
                
                self.send_header("Content-Type", "text/html")
                self.end_headers()
                self.wfile.write(body_to_write.encode("utf-8"))
                
            except Exception as e:
                self.send_response(500)
                self.send_header("Content-Type", "text/html")
                self.end_headers()
                self.wfile.write(f"<h2>C Execution Pipeline Failure</h2><p>{str(e)}</p>".encode("utf-8"))

    def get_upload_page_html(self):
        return """
        <!DOCTYPE html>
        <html lang="en">
        <head>
            <meta charset="UTF-8">
            <meta name="viewport" content="width=device-width, initial-scale=1.0">
            <title>AI Skill Matrix Placement Analyzer</title>
            <style>
                @import url('https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@300;400;600;700;800&display=swap');
                * { box-sizing: border-box; margin: 0; padding: 0; font-family: 'Plus Jakarta Sans', sans-serif; }
                body {
                    background: radial-gradient(circle at top right, #1e1b4b 0%, #0f172a 60%, #090d16 100%);
                    color: #f8fafc; min-height: 100vh; display: flex; align-items: center; justify-content: center; padding: 20px;
                }
                .upload-card {
                    background: rgba(17, 25, 40, 0.75); backdrop-filter: blur(16px); border: 1px solid rgba(255, 255, 255, 0.08);
                    border-radius: 24px; padding: 40px; max-width: 550px; width: 100%; box-shadow: 0 20px 40px rgba(0,0,0,0.5); text-align: center;
                }
                h1 { font-size: 30px; font-weight: 800; margin-bottom: 10px; background: linear-gradient(135deg, #60a5fa, #a78bfa); -webkit-background-clip: text; -webkit-text-fill-color: transparent; }
                p { color: #94a3b8; font-size: 15px; line-height: 1.6; margin-bottom: 30px; }
                .drop-zone { border: 2px dashed rgba(255, 255, 255, 0.15); border-radius: 16px; padding: 35px 20px; background: rgba(255, 255, 255, 0.01); cursor: pointer; transition: 0.3s ease; margin-bottom: 25px; }
                .drop-zone:hover { border-color: #3b82f6; background: rgba(59, 130, 246, 0.02); }
                .file-input { display: none; }
                .submit-btn { width: 100%; background: linear-gradient(135deg, #3b82f6, #4f46e5); color: white; border: none; padding: 15px; font-size: 16px; font-weight: 700; border-radius: 12px; cursor: pointer; transition: 0.3s; }
                .submit-btn:hover { transform: translateY(-2px); box-shadow: 0 10px 20px rgba(59, 130, 246, 0.3); }
            </style>
        </head>
        <body>
            <div class="upload-card">
                <div style="font-size:40px; margin-bottom:15px;">🎓</div>
                <h1>Cognitive Placement Analyzer</h1>
                <p>Submit any text-based resume file. The backend parsing pipeline dynamically targets individual skill metrics and syncs up specialized roadmaps.</p>
                
                <form action="/analyze" method="post" enctype="multipart/form-data">
                    <div class="drop-zone" onclick="document.getElementById('file-field').click()">
                        <div style="font-size: 28px; margin-bottom: 10px;">📄</div>
                        <div style="font-weight: 600; font-size: 15px;">Click to Select Resume File</div>
                        <input type="file" name="resume" id="file-field" class="file-input" required onchange="showFilename(this)">
                    </div>
                    <div id="file-name-display" style="margin-bottom: 15px; font-weight: 600; color: #10b981; font-size: 14px;"></div>
                    <button type="submit" class="submit-btn">Run AI Diagnostic Review</button>
                </form>
            </div>
            <script>
                function showFilename(input) {
                    const display = document.getElementById('file-name-display');
                    if(input.files.length > 0) display.innerText = "Selected: " + input.files[0].name;
                }
            </script>
        </body>
        </html>
        """

if __name__ == "__main__":
    socketserver.TCPServer.allow_reuse_address = True
    print("Opening browser link and initializing server structures...")
    webbrowser.open("http://localhost:8000")
    with socketserver.TCPServer(("", PORT), AdvancedCGIRequestHandler) as httpd:
        httpd.serve_forever()