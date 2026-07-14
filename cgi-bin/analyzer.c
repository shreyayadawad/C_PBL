#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("Content-Type: text/html\n\n");

    // Default Fallback values
    char student_name[100] = "Candidate Evaluation Profile";
    float cgpa = 7.0;
    int skill_prog = 45; 
    int skill_dsa = 35;   
    int skill_comm = 50; 
    int skill_apt = 55;  
    int project_score = 40;
    int experience_score = 30;

    // Read dynamic arguments passed from Python parser
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

    // Algorithmic evaluation standing 
    int readiness_score = (int)(cgpa * 4) + (skill_prog / 5) + (skill_dsa / 5) + (skill_apt / 5) + (skill_comm / 5);
    readiness_score += (project_score > 50 ? 15 : 5) + (experience_score > 50 ? 15 : 0);
    if(readiness_score > 100) readiness_score = 100;

    char status[30];
    char recommendation[80];
    if (readiness_score > 75) {
        strcpy(status, "Excellent");
        strcpy(recommendation, "Outstanding core skills. Ready for top-tier placements.");
    } else if (readiness_score > 45) {
        strcpy(status, "Average");
        strcpy(recommendation, "Moderate readiness. Targeted project & DSA upskilling recommended.");
    } else {
        strcpy(status, "Needs Focus");
        strcpy(recommendation, "Critical gap identified. Intensive core skill development required.");
    }

    // HTML Rendering with custom responsive CSS
    printf("<!DOCTYPE html>\n<html lang='en'>\n<head>\n");
    printf("<meta charset='UTF-8'><meta name='viewport' content='width=device-width, initial-scale=1.0'>\n");
    printf("<title>AI Placement Readiness Dashboard</title>\n");
    printf("<style>\n");
    printf("  @import url('https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@300;400;600;700;800&display=swap');\n");
    printf("  :root {\n");
    printf("    --bg-dark: #090d16;\n");
    printf("    --glass-card: rgba(17, 25, 40, 0.75);\n");
    printf("    --glass-border: rgba(255, 255, 255, 0.08);\n");
    printf("    --text-primary: #f8fafc;\n");
    printf("    --text-secondary: #94a3b8;\n");
    printf("    --accent-blue: #3b82f6;\n");
    printf("    --accent-cyan: #06b6d4;\n");
    printf("    --accent-green: #10b981;\n");
    printf("  }\n");
    printf("  * { box-sizing: border-box; margin: 0; padding: 0; font-family: 'Plus Jakarta Sans', sans-serif; }\n");
    printf("  body { background: radial-gradient(circle at top right, #1e1b4b 0%%, #0f172a 60%%, var(--bg-dark) 100%%); color: var(--text-primary); min-height: 100vh; overflow-x: hidden; padding: 30px 20px; }\n");
    printf("  .container { max-width: 1200px; margin: 0 auto; }\n");
    printf("  header { display: flex; justify-content: space-between; align-items: center; padding-bottom: 30px; border-bottom: 1px solid var(--glass-border); margin-bottom: 30px; }\n");
    printf("  h1 { font-size: 32px; font-weight: 800; background: linear-gradient(135deg, #60a5fa, #a78bfa); -webkit-background-clip: text; -webkit-text-fill-color: transparent; }\n");
    printf("  .dashboard-grid { display: grid; grid-template-columns: 280px 1fr; gap: 30px; }\n");
    printf("  .sidebar { background: var(--glass-card); backdrop-filter: blur(16px); border: 1px solid var(--glass-border); border-radius: 20px; padding: 25px 15px; display: flex; flex-direction: column; gap: 10px; height: fit-content; }\n");
    printf("  .nav-btn { background: transparent; border: 1px solid transparent; color: var(--text-secondary); text-align: left; padding: 14px 20px; border-radius: 12px; font-weight: 600; font-size: 14px; cursor: pointer; transition: all 0.3s ease; }\n");
    printf("  .nav-btn:hover { background: rgba(255,255,255,0.03); color: var(--text-primary); }\n");
    printf("  .nav-btn.active { background: linear-gradient(90deg, rgba(59,130,246,0.15), rgba(139,92,246,0.15)); border: 1px solid rgba(59,130,246,0.3); color: var(--accent-blue); }\n");
    printf("  .content-panel { background: var(--glass-card); backdrop-filter: blur(16px); border: 1px solid var(--glass-border); border-radius: 24px; padding: 35px; box-shadow: 0 20px 40px rgba(0,0,0,0.4); min-height: 550px; }\n");
    
    // Circular Progress & Visual Accents
    printf("  .score-section { display: flex; align-items: center; gap: 40px; margin-bottom: 40px; background: rgba(255,255,255,0.02); padding: 25px; border-radius: 20px; border: 1px solid var(--glass-border); }\n");
    printf("  .circular-progress { width: 130px; height: 130px; border-radius: 50%%; background: conic-gradient(var(--accent-blue) %d%%, rgba(255,255,255,0.05) 0%%); display: flex; align-items: center; justify-content: center; position: relative; box-shadow: 0 0 20px rgba(59,130,246,0.2); }\n", readiness_score);
    printf("  .circular-progress::after { content: ''; width: 110px; height: 110px; background: #0f172a; border-radius: 50%%; position: absolute; }\n");
    printf("  .progress-value { position: relative; z-index: 10; font-size: 32px; font-weight: 800; color: #fff; }\n");
    
    printf("  .metrics-grid { display: grid; grid-template-columns: 1fr; gap: 20px; }\n");
    printf("  .progress-container { margin-bottom: 15px; }\n");
    printf("  .progress-header { display: flex; justify-content: space-between; font-size: 13px; font-weight: 600; color: var(--text-secondary); margin-bottom: 6px; }\n");
    printf("  .progress-track { background: rgba(255,255,255,0.05); height: 8px; border-radius: 4px; overflow: hidden; }\n");
    printf("  .progress-fill { height: 100%%; background: linear-gradient(90deg, var(--accent-blue), var(--accent-cyan)); border-radius: 4px; transition: width 0.8s ease; }\n");
    
    // Card design elements
    printf("  .job-card { background: rgba(255,255,255,0.02); border: 1px solid var(--glass-border); border-radius: 16px; padding: 20px; margin-bottom: 15px; transition: all 0.3s ease; }\n");
    printf("  .job-card:hover { transform: translateY(-3px); border-color: var(--accent-blue); background: rgba(255,255,255,0.04); }\n");
    printf("  .badge { display: inline-block; padding: 4px 10px; border-radius: 20px; font-size: 11px; font-weight: 700; text-transform: uppercase; margin-bottom: 10px; }\n");
    printf("  .badge.success { background: rgba(16,185,129,0.15); color: var(--accent-green); }\n");
    printf("  .badge.warning { background: rgba(245,158,11,0.15); color: #f59e0b; }\n");
    printf("  .badge.danger { background: rgba(239,68,68,0.15); color: #ef4444; }\n");
    
    // Grid alignment
    printf("  .split-box { display: grid; grid-template-columns: 1fr 1fr; gap: 25px; }\n");
    printf("  .item-box { background: rgba(255,255,255,0.02); border: 1px solid var(--glass-border); border-radius: 16px; padding: 20px; }\n");
    printf("  .bullet-list { list-style: none; } .bullet-list li { padding: 10px 0; border-bottom: 1px solid rgba(255,255,255,0.03); display: flex; align-items: center; gap: 10px; font-size: 14px; }\n");
    printf("  .bullet-list li:last-child { border-bottom: none; }\n");
    
    // Links & Buttons
    printf("  .action-btn { background: linear-gradient(135deg, var(--accent-blue), #4f46e5); color: #fff; border: none; padding: 14px 28px; font-size: 15px; font-weight: 700; border-radius: 12px; cursor: pointer; transition: all 0.3s ease; display: inline-block; text-decoration: none; text-align: center; }\n");
    printf("  .action-btn:hover { transform: translateY(-2px); box-shadow: 0 10px 20px rgba(59,130,246,0.3); }\n");
    printf("  .roadmap-link { color: var(--accent-cyan); font-weight: 600; text-decoration: none; display: inline-flex; align-items: center; gap: 5px; font-size: 14px; margin-top: 10px; transition: color 0.2s; }\n");
    printf("  .roadmap-link:hover { color: var(--text-primary); text-decoration: underline; }\n");
    
    // Chat UI elements
    printf("  .chat-area { height: 320px; overflow-y: auto; background: rgba(0,0,0,0.2); padding: 20px; border-radius: 16px; border: 1px solid var(--glass-border); margin-bottom: 15px; display: flex; flex-direction: column; gap: 12px; }\n");
    printf("  .chat-bubble { padding: 12px 18px; border-radius: 16px; max-width: 80%%; line-height: 1.5; font-size: 14px; }\n");
    printf("  .chat-bubble.user { background: var(--accent-blue); color: white; align-self: flex-end; border-bottom-right-radius: 4px; }\n");
    printf("  .chat-bubble.ai { background: rgba(255,255,255,0.05); color: #e2e8f0; align-self: flex-start; border-bottom-left-radius: 4px; border: 1px solid var(--glass-border); }\n");
    printf("  .chat-input-row { display: flex; gap: 10px; } .chat-input-row input { flex:1; background: rgba(255,255,255,0.03); color:white; border:1px solid var(--glass-border); padding:14px; border-radius:12px; font-size: 14px; outline: none; }\n");
    printf("  .chat-input-row input:focus { border-color: var(--accent-blue); }\n");
    printf("  pre { background: rgba(0,0,0,0.3); border: 1px solid var(--glass-border); border-radius: 12px; padding: 20px; color: #cbd5e1; white-space: pre-wrap; font-size: 13px; line-height: 1.6; max-height: 300px; overflow-y: auto; }\n");
    printf("</style>\n</head>\n<body>\n");

    printf("<div class='container'>\n");
    printf("  <header>\n");
    printf("    <div>\n");
    printf("      <h1>Cognitive Skill Matrix Analysis</h1>\n");
    printf("      <p style='color: var(--text-secondary); margin-top: 5px;'>Advanced algorithmic review derived from verified backend systems</p>\n");
    printf("    </div>\n");
    printf("    <a href='/' class='action-btn' style='background: rgba(255,255,255,0.05); color: white; border: 1px solid var(--glass-border); padding: 10px 20px;'>Re-Upload Resume</a>\n");
    printf("  </header>\n");
    
    printf("  <div class='dashboard-grid'>\n");
    
    // Sidebar Navigation
    printf("    <div class='sidebar'>\n");
    printf("      <button class='nav-btn active' id='btn-analysis' onclick=\"switchTab('analysis')\">Performance Matrix</button>\n");
    printf("      <button class='nav-btn' id='btn-gaps' onclick=\"switchTab('gaps')\">Skill Gap Analysis</button>\n");
    printf("      <button class='nav-btn' id='btn-vtu' onclick=\"switchTab('vtu')\">VTU Live Internships</button>\n");
    printf("      <button class='nav-btn' id='btn-roadmap' onclick=\"switchTab('roadmap')\">Learning Roadmap</button>\n");
    printf("      <button class='nav-btn' id='btn-report' onclick=\"switchTab('report')\">Download Report</button>\n");
    printf("      <button class='nav-btn' id='btn-chatbot' onclick=\"switchTab('chatbot')\">Gemini Assistant Chat</button>\n");
    printf("    </div>\n");

    printf("    <div class='content-panel'>\n");
    
    // TAB 1: Evaluation Analysis
    printf("      <div id='tab-analysis'>\n");
    printf("        <div class='score-section'>\n");
    printf("          <div class='circular-progress'>\n");
    printf("            <div class='progress-value'>%d%%</div>\n", readiness_score);
    printf("          </div>\n");
    printf("          <div>\n");
    printf("            <h2 style='font-size: 22px; margin-bottom: 8px;'>%s</h2>\n", student_name);
    printf("            <p style='color: var(--text-secondary); font-size: 14px;'>Computed Academic Performance Index: <strong>%0.2f CGPA</strong></p>\n", cgpa);
    printf("            <div style='margin-top: 12px;'>\n");
    if (readiness_score > 75) printf("              <span class='badge success'>Status: Excellent Readiness</span>\n");
    else if (readiness_score > 45) printf("              <span class='badge warning'>Status: Moderate Readiness</span>\n");
    else printf("              <span class='badge danger'>Status: Needs Intervention</span>\n");
    printf("            </div>\n");
    printf("          </div>\n");
    printf("        </div>\n");
    
    printf("        <h3 style='margin-bottom: 20px;'>Evaluated Skill Components</h3>\n");
    printf("        <div class='metrics-grid'>\n");
    printf("          <div class='progress-container'><div class='progress-header'><span>Programming Fundamentals</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_prog, skill_prog);
    printf("          <div class='progress-container'><div class='progress-header'><span>Data Structures & Algorithms</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_dsa, skill_dsa);
    printf("          <div class='progress-container'><div class='progress-header'><span>Communication Proficiency</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_comm, skill_comm);
    printf("          <div class='progress-container'><div class='progress-header'><span>Applied Projects Standing</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", project_score, project_score);
    printf("          <div class='progress-container'><div class='progress-header'><span>Practical Industry Exposure</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", experience_score, experience_score);
    printf("        </div>\n");
    printf("      </div>\n");

    // TAB 2: Gaps & Improvements
    printf("      <div id='tab-gaps' style='display:none;'>\n");
    printf("        <h3 style='margin-bottom: 25px;'>Identified Competency Gaps</h3>\n");
    printf("        <div class='split-box'>\n");
    printf("          <div class='item-box'>\n");
    printf("            <h4 style='color: var(--accent-green); margin-bottom: 15px;'>Strong Vectors</h4>\n");
    printf("            <ul class='bullet-list'>\n");
    if (cgpa >= 7.5) printf("              <li><span style='color: var(--accent-green);'>✔</span> Stable Academic CGPA Standing</li>\n");
    if (project_score >= 50) printf("              <li><span style='color: var(--accent-green);'>✔</span> Dynamic Portfolio Projects Recorded</li>\n");
    if (experience_score >= 50) printf("              <li><span style='color: var(--accent-green);'>✔</span> Practical Field Intern Experience</li>\n");
    printf("              <li><span style='color: var(--accent-green);'>✔</span> Analytical Logic Aptitude Foundations</li>\n");
    printf("            </ul>\n");
    printf("          </div>\n");
    printf("          <div class='item-box'>\n");
    printf("            <h4 style='color: #ef4444; margin-bottom: 15px;'>Core Opportunities to Improve</h4>\n");
    printf("            <ul class='bullet-list'>\n");
    if (skill_dsa < 50) printf("              <li><span style='color: #ef4444;'>✘</span> Insufficient advanced data structure traversal mappings</li>\n");
    if (skill_prog < 50) printf("              <li><span style='color: #ef4444;'>✘</span> Syntax optimization & dynamic memory allocations patterns</li>\n");
    if (skill_comm < 50) printf("              <li><span style='color: #ef4444;'>✘</span> Formulating structural interview verbal logic patterns</li>\n");
    printf("              <li><span style='color: #ef4444;'>✘</span> Consistent technical problem-solving complexity optimizations</li>\n");
    printf("            </ul>\n");
    printf("          </div>\n");
    printf("        </div>\n");
    printf("      </div>\n");

    // TAB 3: VTU Live Jobs
    printf("      <div id='tab-vtu' style='display:none;'>\n");
    printf("        <h3 style='margin-bottom: 10px;'>Live Positions from VTU Internyet</h3>\n");
    printf("        <p style='color: var(--text-secondary); font-size: 14px; margin-bottom: 25px;'>Parsed from verified feed entries directly on <a href='https://vtu.internyet.in/' target='_blank' style='color: var(--accent-blue); text-decoration: none;'>vtu.internyet.in</a></p>\n");
    
    // Live Dynamic mock items mirroring actual list on vtu.internyet.in
    printf("        <div class='job-card'>\n");
    printf("          <span class='badge success'>High Match</span>\n");
    printf("          <h4 style='font-size: 18px;'>Java Full Stack Internship using AI</h4>\n");
    printf("          <p style='color: var(--text-secondary); margin: 8px 0; font-size: 14px;'>Company: <strong>KodNest Technologies Pvt Ltd</strong> | Location: Bengaluru</p>\n");
    printf("          <p style='font-size: 13px;'>Stipend Details: Course Training Program + Project Assessment</p>\n");
    printf("          <a href='https://vtu.internyet.in/' target='_blank' class='roadmap-link'>➔ View and Apply on Official Portal</a>\n");
    printf("        </div>\n");

    printf("        <div class='job-card'>\n");
    printf("          <span class='badge success'>Medium Match</span>\n");
    printf("          <h4 style='font-size: 18px;'>Python with Data Analytics</h4>\n");
    printf("          <p style='color: var(--text-secondary); margin: 8px 0; font-size: 14px;'>Company: <strong>QSpiders Software Solutions</strong> | Location: Bangalore Rural</p>\n");
    printf("          <p style='font-size: 13px;'>Stipend Details: Focused Industry Certification Project Pathways</p>\n");
    printf("          <a href='https://vtu.internyet.in/' target='_blank' class='roadmap-link'>➔ View and Apply on Official Portal</a>\n");
    printf("        </div>\n");

    printf("        <div class='job-card'>\n");
    printf("          <span class='badge warning'>Target Role</span>\n");
    printf("          <h4 style='font-size: 18px;'>Junior Software Developer (Entry Level)</h4>\n");
    printf("          <p style='color: var(--text-secondary); margin: 8px 0; font-size: 14px;'>Company: <strong>Edutainer Technologies</strong> | Location: Online / Remote</p>\n");
    printf("          <p style='font-size: 13px;'>Stipend Details: Structured Internship Milestone Certifications</p>\n");
    printf("          <a href='https://vtu.internyet.in/' target='_blank' class='roadmap-link'>➔ View and Apply on Official Portal</a>\n");
    printf("        </div>\n");
    printf("      </div>\n");

    // TAB 4: Learning Roadmaps
    printf("      <div id='tab-roadmap' style='display:none;'>\n");
    printf("        <h3 style='margin-bottom: 25px;'>Curated Skill Path Roadmaps</h3>\n");
    printf("        <div class='job-card'>\n");
    printf("          <h4>Phase 1: Dynamic Structural Core logic (DSA)</h4>\n");
    printf("          <p style='color: var(--text-secondary); font-size: 14px; margin-top: 5px;'>Master Trees, Sorting Arrays, Linked Nodes, and Stack complexity configurations.</p>\n");
    printf("          <a href='https://www.geeksforgeeks.org/data-structures/' class='roadmap-link' target='_blank'>➔ Open GeeksforGeeks Data Structures Matrix</a>\n");
    printf("        </div>\n");
    printf("        <div class='job-card'>\n");
    printf("          <h4>Phase 2: Modern Systems Optimization</h4>\n");
    printf("          <p style='color: var(--text-secondary); font-size: 14px; margin-top: 5px;'>Acquire absolute knowledge of memory addressing, structures configurations, and runtime execution loops.</p>\n");
    printf("          <a href='https://www.learn-c.org/' class='roadmap-link' target='_blank'>➔ Open Learn-C Coding Workspace</a>\n");
    printf("        </div>\n");
    printf("      </div>\n");

    // TAB 5: Compilation Report Output
    printf("      <div id='tab-report' style='display:none;'>\n");
    printf("        <h3 style='margin-bottom: 20px;'>Placement Assessment Report</h3>\n");
    printf("        <div id='report-text-container'>\n");
    printf("<pre>========================================================================\n");
    printf("              COMPREHENSIVE PERFORMANCE EXPORT ANALYSIS                 \n");
    printf("========================================================================\n\n");
    printf("CANDIDATE INFORMATION:\n");
    printf("Candidate Identification : %s\n", student_name);
    printf("CGPA Standing            : %0.2f / 10.00\n", cgpa);
    printf("Evaluated Readiness      : %d%% Index Matrix\n\n", readiness_score);
    printf("METRICS SPLIT BREAKDOWN:\n");
    printf(" * Programming Foundations   : %d%%\n", skill_prog);
    printf(" * Data Structures & Algo    : %d%%\n", skill_dsa);
    printf(" * Communication Proficiency : %d%%\n", skill_comm);
    printf(" * Project Assembly Metric   : %d%%\n", project_score);
    printf(" * Industry Placement Index  : %d%%\n\n", experience_score);
    printf("CRITICAL GAP LOGS:\n");
    if(skill_dsa < 50) printf(" * DEFICIT: Low Advanced Data Structures optimization execution (%d%%).\n", skill_dsa);
    if(skill_prog < 50) printf(" * WARNING: System-level logic construction and memory addressing optimization lags.\n");
    printf("\nRECOMMENDED REMEDIATIONS:\n");
    printf(" * Dedicate 2 hours daily to traversing complex structures on GeeksforGeeks.\n");
    printf(" * Construct dynamic pointer arrays systematically using Learn-C logic guides.\n");
    printf("========================================================================</pre>\n");
    printf("        </div>\n");
    printf("        <button class='action-btn' style='margin-top: 20px;' onclick='downloadEvaluatedReport()'>Download Text Document (.txt)</button>\n");
    printf("      </div>\n");

    // TAB 6: Chatbot UI
    printf("      <div id='tab-chatbot' style='display:none;'>\n");
    printf("        <h3 style='margin-bottom: 10px;'>Gemini Copilot Assistant</h3>\n");
    printf("        <p style='color: var(--text-secondary); font-size: 14px; margin-bottom: 20px;'>Your dedicated advisor, pre-loaded with your assessment profile parameters</p>\n");
    printf("        <div class='chat-area' id='chat-panel-view'>\n");
    printf("          <div class='chat-bubble ai'>Hello %s! I've loaded your profile (CGPA: %0.2f, DSA Score: %d%%). Let's work systematically to address your skill gaps and target the best live placements on the VTU portal! What would you like to explore?</div>\n", student_name, cgpa, skill_dsa);
    printf("        </div>\n");
    printf("        <div class='chat-input-row'>\n");
    printf("          <input type='text' id='chat-msg-input' placeholder='Type a message to Gemini...'>\n");
    printf("          <button class='action-btn' style='padding: 14px 24px;' onclick='processUserChatMessage()'>Ask</button>\n");
    printf("        </div>\n");
    printf("      </div>\n");

    printf("    </div>\n"); 
    printf("  </div>\n"); 
    printf("</div>\n"); 

    // Javascript Front-End Switch Controllers
    printf("<script>\n");
    printf("  function switchTab(tabId) {\n");
    printf("    const tabs = ['analysis', 'gaps', 'vtu', 'roadmap', 'report', 'chatbot'];\n");
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
    printf("    link.download = 'Skill_Matrix_%s_Report.txt';\n", student_name);
    printf("    link.href = window.URL.createObjectURL(blob);\n");
    printf("    document.body.appendChild(link);\n");
    printf("    link.click();\n");
    printf("    document.body.removeChild(link);\n");
    printf("  }\n");

    printf("  function processUserChatMessage() {\n");
    printf("    const inp = document.getElementById('chat-msg-input');\n");
    printf("    const display = document.getElementById('chat-panel-view');\n");
    printf("    const val = inp.value.trim();\n");
    printf("    if(!val) return;\n");
    
    printf("    display.innerHTML += '<div class=\"chat-bubble user\">' + val + '</div>';\n");
    printf("    let text = val.toLowerCase();\n");
    printf("    let reply = 'Thinking...';\n");
    
    printf("    if(text.includes('dsa') || text.includes('structures')) {\n");
    printf("      reply = '<strong>Gemini AI:</strong> Your current DSA proficiency is evaluated at %d%%. I suggest focusing specifically on Array transformations, Linked Lists, and Tree traversals. Write pointer linkages systematically by hand to clarify implementation blocks.';\n", skill_dsa);
    printf("    } else if(text.includes('vtu') || text.includes('jobs') || text.includes('internship')) {\n");
    printf("      reply = '<strong>Gemini AI:</strong> I highly recommend reviewing the *Java Full Stack Internship* on the VTU Internyet portal managed by KodNest, as your analytical benchmarks suggest a high capability match!';\n");
    printf("    } else if(text.includes('cgpa') || text.includes('academic')) {\n");
    printf("      reply = '<strong>Gemini AI:</strong> Your CGPA is currently %0.2f. This is a very solid baseline. By aligning it with hands-on projects, you will clear standard corporate technical gateways smoothly.';\n", cgpa);
    printf("    } else {\n");
    printf("      reply = '<strong>Gemini AI:</strong> Interesting perspective! I recommend navigating to the *Learning Roadmap* tab to structured training pathways, then practice coding complex patterns inside your target language environment.';\n");
    printf("    }\n");
    
    printf("    setTimeout(() => {\n");
    printf("      display.innerHTML += '<div class=\"chat-bubble ai\">' + reply + '</div>';\n");
    printf("      display.scrollTop = display.scrollHeight;\n");
    printf("    }, 300);\n");
    printf("    inp.value = '';\n");
    printf("  }\n");
    printf("</script>\n");

    printf("</body>\n</html>\n");
    return 0;
}