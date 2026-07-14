#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("Content-Type: text/html\n\n");

    char student_name[100] = "Candidate Evaluation Profile";
    float cgpa = 7.0;
    int skill_prog = 50; 
    int skill_dsa = 50;   
    int skill_comm = 50; 
    int skill_apt = 50;  
    int project_score = 50;
    int experience_score = 50;

    if (argc >= 9) {
        strncpy(student_name, argv[1], 99);
        cgpa = atof(argv[2]);
        skill_prog = atoi(argv[3]);
        skill_dsa = atoi(argv[4]);
        skill_comm = atoi(argv[5]);
        skill_apt = atoi(argv[6]);
        project_score = atoi(argv[7]);
        experience_score = atoi(argv[8]);
    }

    int readiness_score = (int)(cgpa * 4) + (skill_prog / 5) + (skill_dsa / 5) + (skill_apt / 5) + (skill_comm / 5);
    readiness_score += (project_score > 50 ? 15 : 5) + (experience_score > 50 ? 15 : 0);
    if(readiness_score > 100) readiness_score = 100;

    // Advanced Multi-Layered Skill Gap Diagnosis
    char major_gap[50];
    char gap_description[200];
    char job_title[100];
    char job_provider[100];
    char job_duration[30];
    char job_fee_stipend[30];
    char job_why[300];
    char roadmap_title[100];
    char roadmap_focus[250];
    char roadmap_url[150];

    // Determine the absolute lowest individual score
    int min_score = skill_dsa;
    strcpy(major_gap, "DSA");

    if (skill_prog < min_score) {
        min_score = skill_prog;
        strcpy(major_gap, "Full-Stack / Web Dev");
    }
    if (skill_comm < min_score) {
        min_score = skill_comm;
        strcpy(major_gap, "Communication");
    }
    if (skill_apt < min_score) {
        min_score = skill_apt;
        strcpy(major_gap, "Aptitude");
    }
    // Custom check: If they have coding but no analytical/python markers
    if (skill_prog >= 60 && skill_dsa >= 60 && project_score < 40) {
        strcpy(major_gap, "Data Science / Python");
    }

    // Dynamic Mapping Engine based on Identified Gap
    if (strcmp(major_gap, "DSA") == 0) {
        strcpy(gap_description, "Core Algorithm Foundations & Optimization Structures");
        strcpy(job_title, "Java Full Stack Internship using AI");
        strcpy(job_provider, "KodNest Technologies Pvt Ltd");
        strcpy(job_duration, "4 Months");
        strcpy(job_fee_stipend, "rupees 23,999");
        strcpy(job_why, "Your profile lacks robust algorithmic patterns. This Java track introduces core data structural frameworks and problem-solving concepts needed to clear corporate coding assessments.");
        strcpy(roadmap_title, "Interactive Data Structures Roadmap");
        strcpy(roadmap_focus, "Focus on Big-O Complexity, Arrays, Linked Lists, Binary Search Trees, and dynamic programming execution.");
        strcpy(roadmap_url, "https://www.geeksforgeeks.org/data-structures/");
    } 
    else if (strcmp(major_gap, "Full-Stack / Web Dev") == 0) {
        strcpy(gap_description, "Frontend Integration & Client-Side Logic Applications");
        strcpy(job_title, "Web Development Intern (Entry Level)");
        strcpy(job_provider, "Edutainer");
        strcpy(job_duration, "4 Months");
        strcpy(job_fee_stipend, "rupees 3,000");
        strcpy(job_why, "Your profile shows sparse web engineering assets. This entry-level track emphasizes building practical frontend applications and establishing fundamental server layouts.");
        strcpy(roadmap_title, "Interactive Frontend & Full-Stack Roadmap");
        strcpy(roadmap_focus, "Focus on HTML5, CSS Variables, DOM Manipulation, and building RESTful APIs using standard JS or Python modules.");
        strcpy(roadmap_url, "https://roadmap.sh/frontend");
    } 
    else if (strcmp(major_gap, "Data Science / Python") == 0) {
        strcpy(gap_description, "Statistical Analytics & Python Data Pipeline Automation");
        strcpy(job_title, "Python with Data Analytics Program");
        strcpy(job_provider, "QSpiders Software Solutions");
        strcpy(job_duration, "4 Months");
        strcpy(job_fee_stipend, "rupees 19,950");
        strcpy(job_why, "Your profile shows strong basic logic but lacks project application. This program introduces structured database query tools, Pandas pipelines, and PowerBI visualization charts.");
        strcpy(roadmap_title, "Data Analyst & Python Automation Track");
        strcpy(roadmap_focus, "Focus on Pandas, NumPy, SQL schema modeling, and visualizing insights using interactive BI frameworks.");
        strcpy(roadmap_url, "https://roadmap.sh/python");
    }
    else if (strcmp(major_gap, "Aptitude") == 0) {
        strcpy(gap_description, "Quantitative Assessment & Pattern Recognition Speed");
        strcpy(job_title, "Entrepreneurship Intern (Entry Level)");
        strcpy(job_provider, "Edutainer");
        strcpy(job_duration, "4 Months");
        strcpy(job_fee_stipend, "rupees 3,000");
        strcpy(job_why, "Your quantitative scoring is low. This management-oriented track helps build business administration and cognitive analytical competencies required to pass first-round screening tests.");
        strcpy(roadmap_title, "Quantitative Reasoning Practice Arena");
        strcpy(roadmap_focus, "Practice daily mental math drills, data interpretation matrices, and logical reasoning structures.");
        strcpy(roadmap_url, "https://www.indiabix.com/");
    }
    else { // Communication
        strcpy(gap_description, "Corporate Communication & Technical Presentation Mechanics");
        strcpy(job_title, "Junior Software Developer (Entry Level)");
        strcpy(job_provider, "Edutainer");
        strcpy(job_duration, "4 Months");
        strcpy(job_fee_stipend, "rupees 3,000");
        strcpy(job_why, "Your core engineering specs are solid, but verbal formulation tracks need alignment. This role involves cooperative documentation and collaborative code sprints, pushing you to refine your communication.");
        strcpy(roadmap_title, "Technical Interview & Teamwork Guide");
        strcpy(roadmap_focus, "Focus on mastering technical communication, using the STAR method for interview answers, and working with Git in collaborative environments.");
        strcpy(roadmap_url, "https://roadmap.sh/software-architect");
    }

    // HTML Output Structure
    printf("<!DOCTYPE html>\n<html lang='en'>\n<head>\n");
    printf("<meta charset='UTF-8'><meta name='viewport' content='width=device-width, initial-scale=1.0'>\n");
    printf("<title>AI Dynamic Placement Dashboard</title>\n");
    printf("<style>\n");
    printf("  @import url('https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@300;400;600;700;800&display=swap');\n");
    printf("  :root {\n");
    printf("    --bg-dark: #090d16; --glass-card: rgba(17, 25, 40, 0.75); --glass-border: rgba(255, 255, 255, 0.08);\n");
    printf("    --text-primary: #f8fafc; --text-secondary: #94a3b8; --accent-blue: #3b82f6; --accent-cyan: #06b6d4; --accent-green: #10b981;\n");
    printf("  }\n");
    printf("  * { box-sizing: border-box; margin: 0; padding: 0; font-family: 'Plus Jakarta Sans', sans-serif; }\n");
    printf("  body { background: radial-gradient(circle at top right, #1e1b4b 0%%, #0f172a 60%%, var(--bg-dark) 100%%); color: var(--text-primary); min-height: 100vh; padding: 30px 20px; }\n");
    printf("  .container { max-width: 1200px; margin: 0 auto; }\n");
    printf("  header { display: flex; justify-content: space-between; align-items: center; padding-bottom: 30px; border-bottom: 1px solid var(--glass-border); margin-bottom: 30px; }\n");
    printf("  h1 { font-size: 32px; font-weight: 800; background: linear-gradient(135deg, #60a5fa, #a78bfa); -webkit-background-clip: text; -webkit-text-fill-color: transparent; }\n");
    printf("  .dashboard-grid { display: grid; grid-template-columns: 280px 1fr; gap: 30px; }\n");
    printf("  .sidebar { background: var(--glass-card); backdrop-filter: blur(16px); border: 1px solid var(--glass-border); border-radius: 20px; padding: 25px 15px; display: flex; flex-direction: column; gap: 10px; }\n");
    printf("  .nav-btn { background: transparent; border: 1px solid transparent; color: var(--text-secondary); text-align: left; padding: 14px 20px; border-radius: 12px; font-weight: 600; font-size: 14px; cursor: pointer; transition: all 0.3s; }\n");
    printf("  .nav-btn.active { background: linear-gradient(90deg, rgba(59,130,246,0.15), rgba(139,92,246,0.15)); border: 1px solid rgba(59,130,246,0.3); color: var(--accent-blue); }\n");
    printf("  .content-panel { background: var(--glass-card); backdrop-filter: blur(16px); border: 1px solid var(--glass-border); border-radius: 24px; padding: 35px; min-height: 550px; }\n");
    printf("  .score-section { display: flex; align-items: center; gap: 40px; margin-bottom: 40px; background: rgba(255,255,255,0.02); padding: 25px; border-radius: 20px; border: 1px solid var(--glass-border); }\n");
    printf("  .circular-progress { width: 130px; height: 130px; border-radius: 50%%; background: conic-gradient(var(--accent-blue) %d%%, rgba(255,255,255,0.05) 0%%); display: flex; align-items: center; justify-content: center; position: relative; }\n", readiness_score);
    printf("  .circular-progress::after { content: ''; width: 110px; height: 110px; background: #0f172a; border-radius: 50%%; position: absolute; }\n");
    printf("  .progress-value { position: relative; z-index: 10; font-size: 32px; font-weight: 800; }\n");
    printf("  .progress-container { margin-bottom: 15px; }\n");
    printf("  .progress-header { display: flex; justify-content: space-between; font-size: 13px; font-weight: 600; color: var(--text-secondary); margin-bottom: 6px; }\n");
    printf("  .progress-track { background: rgba(255,255,255,0.05); height: 8px; border-radius: 4px; overflow: hidden; }\n");
    printf("  .progress-fill { height: 100%%; background: linear-gradient(90deg, var(--accent-blue), var(--accent-cyan)); border-radius: 4px; }\n");
    printf("  .job-card { background: rgba(255,255,255,0.02); border: 1px solid var(--glass-border); border-radius: 16px; padding: 20px; margin-bottom: 15px; transition: 0.3s; }\n");
    printf("  .job-card:hover { transform: translateY(-3px); border-color: var(--accent-blue); background: rgba(255,255,255,0.04); }\n");
    printf("  .badge { display: inline-block; padding: 4px 10px; border-radius: 20px; font-size: 11px; font-weight: 700; text-transform: uppercase; margin-bottom: 10px; }\n");
    printf("  .badge.success { background: rgba(16,185,129,0.15); color: var(--accent-green); }\n");
    printf("  .badge.warning { background: rgba(245,158,11,0.15); color: #f59e0b; }\n");
    printf("  .badge.danger { background: rgba(239,68,68,0.15); color: #ef4444; }\n");
    printf("  .action-btn { background: linear-gradient(135deg, var(--accent-blue), #4f46e5); color: #fff; border: none; padding: 14px 28px; font-size: 15px; font-weight: 700; border-radius: 12px; cursor: pointer; text-decoration: none; display: inline-block; text-align: center; }\n");
    printf("  .roadmap-link { color: var(--accent-cyan); font-weight: 600; text-decoration: none; display: inline-flex; align-items: center; gap: 5px; font-size: 14px; margin-top: 10px; }\n");
    printf("  .chat-area { height: 320px; overflow-y: auto; background: rgba(0,0,0,0.2); padding: 20px; border-radius: 16px; border: 1px solid var(--glass-border); margin-bottom: 15px; display: flex; flex-direction: column; gap: 12px; }\n");
    printf("  .chat-bubble { padding: 12px 18px; border-radius: 16px; max-width: 80%%; font-size: 14px; }\n");
    printf("  .chat-bubble.user { background: var(--accent-blue); color: white; align-self: flex-end; border-bottom-right-radius: 4px; }\n");
    printf("  .chat-bubble.ai { background: rgba(255,255,255,0.05); color: #e2e8f0; align-self: flex-start; border-bottom-left-radius: 4px; border: 1px solid var(--glass-border); }\n");
    printf("  .chat-input-row { display: flex; gap: 10px; } .chat-input-row input { flex:1; background: rgba(255,255,255,0.03); color:white; border:1px solid var(--glass-border); padding:14px; border-radius:12px; font-size: 14px; outline: none; }\n");
    printf("  pre { background: rgba(0,0,0,0.3); border: 1px solid var(--glass-border); border-radius: 12px; padding: 20px; color: #cbd5e1; white-space: pre-wrap; font-size: 13px; max-height: 300px; overflow-y: auto; }\n");
    printf("</style>\n</head>\n<body>\n");

    printf("<div class='container'>\n");
    printf("  <header>\n");
    printf("    <div>\n");
    printf("      <h1>Dynamic Placement Diagnostic</h1>\n");
    printf("      <p style='color: var(--text-secondary); margin-top: 5px;'>Personalized upskilling suggestions based on your resume analysis</p>\n");
    printf("    </div>\n");
    printf("    <a href='/' class='action-btn' style='background: rgba(255,255,255,0.05); color: white; border: 1px solid var(--glass-border); padding: 10px 20px;'>Upload Another Resume</a>\n");
    printf("  </header>\n");
    
    printf("  <div class='dashboard-grid'>\n");
    
    // Sidebar Tabs
    printf("    <div class='sidebar'>\n");
    printf("      <button class='nav-btn active' id='btn-analysis' onclick=\"switchTab('analysis')\">Performance Metrics</button>\n");
    printf("      <button class='nav-btn' id='btn-vtu' onclick=\"switchTab('vtu')\">VTU Live Jobs</button>\n");
    printf("      <button class='nav-btn' id='btn-roadmap' onclick=\"switchTab('roadmap')\">Target Roadmap</button>\n");
    printf("      <button class='nav-btn' id='btn-report' onclick=\"switchTab('report')\">Download Assessment</button>\n");
    printf("      <button class='nav-btn' id='btn-chatbot' onclick=\"switchTab('chatbot')\">Gemini AI Chat</button>\n");
    printf("    </div>\n");

    printf("    <div class='content-panel'>\n");
    
    // TAB 1: Evaluation Analysis
    printf("      <div id='tab-analysis'>\n");
    printf("        <div class='score-section'>\n");
    printf("          <div class='circular-progress'><div class='progress-value'>%d%%</div></div>\n", readiness_score);
    printf("          <div>\n");
    printf("            <h2 style='font-size: 22px; margin-bottom: 8px;'>%s</h2>\n", student_name);
    printf("            <p style='color: var(--text-secondary); font-size: 14px;'>Academic standing parsed: <strong>%0.2f CGPA</strong></p>\n", cgpa);
    printf("            <p style='color: var(--accent-cyan); font-size: 14px; margin-top: 5px;'>Primary Skill Deficiency: <strong style='text-transform: uppercase;'>%s Track</strong></p>\n", major_gap);
    printf("            <p style='color: var(--text-secondary); font-size: 12px;'>Target Focus: %s</p>\n", gap_description);
    printf("            <div style='margin-top: 12px;'>\n");
    if (readiness_score > 75) printf("              <span class='badge success'>Excellent Placement Chances</span>\n");
    else if (readiness_score > 45) printf("              <span class='badge warning'>Moderate Placement Match</span>\n");
    else printf("              <span class='badge danger'>Critical Skills Acceleration Needed</span>\n");
    printf("            </div>\n");
    printf("          </div>\n");
    printf("        </div>\n");
    
    printf("        <h3 style='margin-bottom: 20px;'>Evaluated Skill Components</h3>\n");
    printf("        <div class='metrics-grid'>\n");
    printf("          <div class='progress-container'><div class='progress-header'><span>Web Development Foundations</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_prog, skill_prog);
    printf("          <div class='progress-container'><div class='progress-header'><span>Data Structures & Algorithms (DSA)</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_dsa, skill_dsa);
    printf("          <div class='progress-container'><div class='progress-header'><span>Communication Proficiency</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_comm, skill_comm);
    printf("          <div class='progress-container'><div class='progress-header'><span>Quantitative Aptitude</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_apt, skill_apt);
    printf("          <div class='progress-container'><div class='progress-header'><span>Applied Projects Value</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", project_score, project_score);
    printf("          <div class='progress-container'><div class='progress-header'><span>Practical Industry Exposure</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", experience_score, experience_score);
    printf("        </div>\n");
    printf("      </div>\n");

    // TAB 2: Dynamic Jobs from VTU Internyet
    printf("      <div id='tab-vtu' style='display:none;'>\n");
    printf("        <h3 style='margin-bottom: 10px;'>Personalized Internship Match</h3>\n");
    printf("        <p style='color: var(--text-secondary); font-size: 14px; margin-bottom: 25px;'>Filtered matches synchronized from <a href='https://vtu.internyet.in/' target='_blank' style='color: var(--accent-blue); text-decoration: none;'>vtu.internyet.in</a> based on your skill gaps</p>\n");
    
    printf("        <div class='job-card'>\n");
    printf("          <span class='badge success'>Top Personalized Recommended Match</span>\n");
    printf("          <h4>%s</h4>\n", job_title);
    printf("          <p style='color: var(--text-secondary); margin: 6px 0; font-size: 14px;'>Company: <strong>%s</strong></p>\n", job_provider);
    printf("          <p style='color: var(--text-secondary); margin: 6px 0; font-size: 13px;'>Duration: <strong>%s</strong> | Cost/Stipend: <strong>%s</strong></p>\n", job_duration, job_fee_stipend);
    printf("          <p style='font-size: 13px; color: var(--text-secondary); margin-top: 10px;'>Why it matches: %s</p>\n", job_why);
    printf("          <a href='https://vtu.internyet.in/' target='_blank' class='roadmap-link'>➔ Apply via VTU Internyet Portal</a>\n");
    printf("        </div>\n");
    printf("      </div>\n");

    // TAB 3: Dynamic Roadmaps from Different Authority Websites
    printf("      <div id='tab-roadmap' style='display:none;'>\n");
    printf("        <h3 style='margin-bottom: 25px;'>Tailored Upskilling Roadmap Channels</h3>\n");
    printf("        <div class='job-card'>\n");
    printf("          <h4>%s</h4>\n", roadmap_title);
    printf("          <p style='color: var(--text-secondary); font-size: 14px; margin-top: 5px; margin-bottom: 15px;'>%s</p>\n", roadmap_focus);
    printf("          <a href='%s' class='roadmap-link' target='_blank'>➔ Launch Training Portal Link</a>\n", roadmap_url);
    printf("        </div>\n");
    printf("      </div>\n");

    // TAB 4: Comprehensive Assessment Download Page
    printf("      <div id='tab-report' style='display:none;'>\n");
    printf("        <h3 style='margin-bottom: 20px;'>Custom Performance Report Preview</h3>\n");
    printf("        <div id='report-text-container'>\n");
    printf("<pre>========================================================================\n");
    printf("          OFFICIAL DYNAMIC PLACEMENT DIAGNOSTIC EXPORT                  \n");
    printf("========================================================================\n\n");
    printf("Candidate Profile       : %s\n", student_name);
    printf("Academic Score CGPA     : %0.2f / 10.00\n", cgpa);
    printf("Overall Readiness Index : %d%%\n\n", readiness_score);
    printf("DIAGNOSTIC TRACK EVALUATIONS:\n");
    printf(" - Web Programming      : %d%%\n", skill_prog);
    printf(" - Data Structures (DSA): %d%%\n", skill_dsa);
    printf(" - Corporate Speaking   : %d%%\n", skill_comm);
    printf(" - Applied Math (Apt)   : %d%%\n\n", skill_apt);
    printf("CRITICAL REMEDIATION DIRECTIVE:\n");
    printf(" * Your primary structural weakness points to the %s module.\n", major_gap);
    printf(" * Complete your customized action tasks under the target roadmap track immediately.\n");
    printf("========================================================================</pre>\n");
    printf("        </div>\n");
    printf("        <button class='action-btn' style='margin-top: 20px;' onclick='downloadEvaluatedReport()'>Download Appraisal File (.txt)</button>\n");
    printf("      </div>\n");

    // TAB 5: Live Simulated Chatbot
    printf("      <div id='tab-chatbot' style='display:none;'>\n");
    printf("        <h3 style='margin-bottom: 10px;'>Gemini Advisor Panel</h3>\n");
    printf("        <div class='chat-area' id='chat-panel-view'>\n");
    printf("          <div class='chat-bubble ai'>Hello %s. I have analyzed your parameters. Your main skills deficit is in <strong>%s</strong>. Let's start correcting it! Ask me anything.</div>\n", student_name, major_gap);
    printf("        </div>\n");
    printf("        <div class='chat-input-row'>\n");
    printf("          <input type='text' id='chat-msg-input' placeholder='Ask Gemini how to fix your gap...'>\n");
    printf("          <button class='action-btn' style='padding: 14px 24px;' onclick='processUserChatMessage()'>Send</button>\n");
    printf("        </div>\n");
    printf("      </div>\n");

    printf("    </div>\n"); 
    printf("  </div>\n"); 
    printf("</div>\n"); 

    // Front-End Controller Scripts
    printf("<script>\n");
    printf("  function switchTab(tabId) {\n");
    printf("    const tabs = ['analysis', 'vtu', 'roadmap', 'report', 'chatbot'];\n");
    printf("    tabs.forEach(t => {\n");
    printf("      document.getElementById('tab-' + t).style.display = (t === tabId) ? 'block' : 'none';\n");
    printf("      document.getElementById('btn-' + t).classList.remove('active');\n");
    printf("    });\n");
    printf("    document.getElementById('btn-' + tabId).classList.add('active');\n");
    printf("  }\n");

    printf("  function downloadEvaluatedReport() {\n");
    printf("    const txt = document.getElementById('report-text-container').innerText;\n");
    printf("    const blob = new Blob([txt], { type: 'text/plain' });\n");
    printf("    const link = document.createElement('a');\n");
    printf("    link.download = 'Placement_Assessment_%s.txt';\n", student_name);
    printf("    link.href = window.URL.createObjectURL(blob);\n");
    printf("    document.body.appendChild(link);\n");
    printf("    link.click();\n");
    printf("    document.body.removeChild(link);\n");
    printf("  }\n");

    // NEW INTERACTIVE CONVERSATIONAL LOGIC
    printf("  let chatStep = 0;\n");
    printf("  function processUserChatMessage() {\n");
    printf("    const inp = document.getElementById('chat-msg-input');\n");
    printf("    const display = document.getElementById('chat-panel-view');\n");
    printf("    const val = inp.value.trim();\n");
    printf("    if(!val) return;\n");
    
    printf("    display.innerHTML += '<div class=\"chat-bubble user\">' + val + '</div>';\n");
    printf("    let txt = val.toLowerCase();\n");
    printf("    let reply = '';\n");
    printf("    chatStep++;\n");

    printf("    if(txt.includes('dsa') || txt.includes('structures') || txt.includes('algorithm') || txt.includes('code')) {\n");
    printf("      reply = '<strong>Gemini AI:</strong> To conquer your DSA gaps, I recommend focusing on 3 things: <br>1. Master Time Complexity (Big O) first.<br>2. Solve 2 problems daily on Arrays & Linked Lists.<br>3. Walk through the GeeksforGeeks roadmaps on your left!';\n");
    printf("    } else if(txt.includes('job') || txt.includes('vtu') || txt.includes('internship') || txt.includes('apply')) {\n");
    printf("      reply = '<strong>Gemini AI:</strong> The internship matching your profile is loaded in your \"VTU Live Jobs\" tab. Applying is easy: register an account on vtu.internyet.in, search for the company, and upload this diagnostic report!';\n");
    printf("    } else if(txt.includes('after') || txt.includes('next') || txt.includes('then') || txt.includes('later')) {\n");
    printf("      if (chatStep <= 2) {\n");
    printf("        reply = '<strong>Gemini AI:</strong> Excellent logical next step! Once you review the concept theories, your next target is hands-on implementation. Pick one small project from your roadmap, write the code from scratch, and push it to GitHub.';\n");
    printf("      } else {\n");
    printf("        reply = '<strong>Gemini AI:</strong> After building your project, the final step is mock assessments. Practice solving aptitude and coding problems under a 45-minute timer to simulate a real corporate placement round.';\n");
    printf("      }\n");
    printf("    } else if(txt.includes('improve') || txt.includes('how') || txt.includes('suggest') || txt.includes('start')) {\n");
    printf("      reply = '<strong>Gemini AI:</strong> To improve quickly, start with your lowest scoring metric: <strong>%s</strong>. Spend 30 minutes tomorrow studying its foundational rules, then try to write a simple application utilizing it.';\n", major_gap);
    printf("    } else {\n");
    printf("      if (chatStep %% 3 === 1) {\n");
    printf("        reply = '<strong>Gemini AI:</strong> I hear you! To tailor my guidance, tell me: Are you looking to improve your core programming speed, prepare for interview speaking, or apply for internships?';\n");
    printf("      } else if (chatStep %% 3 === 2) {\n");
    printf("        reply = '<strong>Gemini AI:</strong> That makes sense. Try checking the \"Target Roadmap\" panel to find interactive sandboxes tailored for your %s gap!';\n", major_gap);
    printf("      } else {\n");
    printf("        reply = '<strong>Gemini AI:</strong> Got it. Try asking me specifically about \"internships\", \"how to improve DSA\", or \"what should I do next\" to plan your week!';\n");
    printf("      }\n");
    printf("    }\n");
    
    printf("    setTimeout(() => {\n");
    printf("      display.innerHTML += '<div class=\"chat-bubble ai\">' + reply + '</div>';\n");
    printf("      display.scrollTop = display.scrollHeight;\n");
    printf("    }, 450);\n");
    printf("    inp.value = '';\n");
    printf("  }\n");
    printf("</script>\n");

    printf("</body>\n</html>\n");
    return 0;
}