#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Standard HTTP header instantiation
    printf("Content-Type: text/html\n\n");

    // Primary parsed evaluation profile allocations
    char student_name[100] = "Alex Williams";
    float cgpa = 7.00;
    int skill_prog = 50; 
    int skill_dsa = 20;   
    int skill_comm = 40; 
    int skill_apt = 70;  
    int project_score = 30;
    int experience_score = 20;

    // Command Line Interface variable hydration engine (CGI standard parameter architecture)
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

    // Algorithmic computation framework mapping exactly to image specifications
    int readiness_score = (int)(cgpa * 4) + (skill_prog / 5) + (skill_dsa / 5) + (skill_apt / 5) + (skill_comm / 5);
    readiness_score += (project_score > 50 ? 15 : 5) + (experience_score > 50 ? 15 : 0);
    if(readiness_score > 100) readiness_score = 100;
    if(readiness_score < 0) readiness_score = 0;

    // Deterministic state machine identification logic to resolve primary structural deficits
    char major_gap[50];
    char gap_description[150];
    int lowest_val = skill_dsa;
    strcpy(major_gap, "Data Structures & Algorithms");
    strcpy(gap_description, "Low Advanced Data Structures optimization execution (20%).");

    if(skill_prog < lowest_val) {
        lowest_val = skill_prog;
        strcpy(major_gap, "Programming Fundamentals");
        strcpy(gap_description, "Low application syntax layout deployment proficiency.");
    }
    if(skill_comm < lowest_val) {
        lowest_val = skill_comm;
        strcpy(major_gap, "Communication Proficiency");
        strcpy(gap_description, "Unrefined engineering articulation constraints.");
    }
    if(skill_apt < lowest_val) {
        lowest_val = skill_apt;
        strcpy(major_gap, "Quantitative Aptitude");
        strcpy(gap_description, "Analytical tracking velocity gaps under testing constraints.");
    }

    // HTML Rendering Stream Document
    printf("<!DOCTYPE html>\n<html lang='en'>\n<head>\n");
    printf("<meta charset='UTF-8'><meta name='viewport' content='width=device-width, initial-scale=1.0'>\n");
    printf("<title>AI Placement Readiness Dashboard</title>\n");
    
    // Exact UI CSS Styling Engine matching structural glassmorphic dark properties from the images
    printf("<style>\n");
    printf("  @import url('https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@300;400;500;600;700;800&display=swap');\n");
    printf("  :root {\n");
    printf("    --bg-dark: #070913; --glass-card: rgba(13, 19, 33, 0.75); --glass-border: rgba(255, 255, 255, 0.07);\n");
    printf("    --text-primary: #f8fafc; --text-secondary: #94a3b8; --accent-indigo: #6366f1; --accent-purple: #a855f7; --accent-green: #10b981; --accent-red: #ef4444;\n");
    printf("  }\n");
    printf("  * { box-sizing: border-box; margin: 0; padding: 0; font-family: 'Plus Jakarta Sans', sans-serif; }\n");
    printf("  body { background: radial-gradient(circle at top left, #161233 0%%, #0b0e1a 50%%, var(--bg-dark) 100%%); color: var(--text-primary); min-height: 100vh; padding: 40px 30px; }\n");
    printf("  .container { max-width: 1300px; margin: 0 auto; }\n");
    printf("  header { display: flex; justify-content: space-between; align-items: center; padding-bottom: 25px; border-bottom: 1px solid var(--glass-border); margin-bottom: 35px; }\n");
    printf("  h1 { font-size: 28px; font-weight: 800; background: linear-gradient(135deg, #a5b4fc, #e9d5ff); -webkit-background-clip: text; -webkit-text-fill-color: transparent; }\n");
    printf("  .dashboard-grid { display: grid; grid-template-columns: 280px 1fr; gap: 35px; }\n");
    printf("  .sidebar { background: rgba(9, 12, 24, 0.8); backdrop-filter: blur(20px); border: 1px solid var(--glass-border); border-radius: 20px; padding: 25px 15px; display: flex; flex-direction: column; gap: 8px; height: fit-content; }\n");
    printf("  .nav-btn { background: transparent; border: 1px solid transparent; color: var(--text-secondary); text-align: left; padding: 14px 20px; border-radius: 12px; font-weight: 600; font-size: 14px; cursor: pointer; transition: all 0.25s; text-decoration: none; }\n");
    printf("  .nav-btn:hover { color: var(--text-primary); background: rgba(255,255,255,0.02); }\n");
    printf("  .nav-btn.active { background: linear-gradient(90deg, rgba(99,102,241,0.15), rgba(168,85,247,0.15)); border: 1px solid rgba(168,85,247,0.25); color: #c084fc; }\n");
    printf("  .content-panel { background: var(--glass-card); backdrop-filter: blur(20px); border: 1px solid var(--glass-border); border-radius: 24px; padding: 40px; min-height: 580px; box-shadow: 0 20px 50px rgba(0,0,0,0.4); }\n");
    printf("  .reupload-btn { background: rgba(255, 255, 255, 0.04); border: 1px solid var(--glass-border); color: var(--text-primary); padding: 12px 24px; border-radius: 12px; font-size: 14px; font-weight: 600; cursor: pointer; text-decoration: none; transition: 0.2s; }\n");
    printf("  .reupload-btn:hover { background: rgba(255, 255, 255, 0.08); border-color: rgba(255,255,255,0.2); }\n");
    
    // Performance Tab Component Matrix Layouts
    printf("  .metrics-summary-box { display: flex; align-items: center; gap: 40px; background: rgba(255,255,255,0.01); padding: 25px; border-radius: 20px; border: 1px solid var(--glass-border); margin-bottom: 35px; }\n");
    printf("  .radial-chart-frame { width: 120px; height: 120px; border-radius: 50%%; background: conic-gradient(var(--accent-indigo) %d%%, rgba(255,255,255,0.04) 0%%); display: flex; align-items: center; justify-content: center; position: relative; }\n", readiness_score);
    printf("  .radial-chart-frame::after { content: ''; width: 98px; height: 98px; background: #0c0f1d; border-radius: 50%%; position: absolute; }\n");
    printf("  .radial-chart-val { position: relative; z-index: 5; font-size: 28px; font-weight: 800; color: var(--text-primary); }\n");
    printf("  .metrics-grid { display: flex; flex-direction: column; gap: 24px; }\n");
    printf("  .progress-container { width: 100%%; }\n");
    printf("  .progress-header { display: flex; justify-content: space-between; font-size: 13px; font-weight: 600; color: var(--text-secondary); margin-bottom: 8px; letter-spacing: 0.3px; }\n");
    printf("  .progress-track { background: rgba(255,255,255,0.04); height: 8px; border-radius: 10px; overflow: hidden; border: 1px solid rgba(255,255,255,0.02); }\n");
    printf("  .progress-fill { height: 100%%; background: linear-gradient(90deg, var(--accent-indigo), var(--accent-purple)); border-radius: 10px; transition: width 0.5s ease-in-out; }\n");
    
    // Core Matrix Gaps structural grid matching image 13
    printf("  .matrix-layout-grid { display: grid; grid-template-columns: 1fr 1fr; gap: 30px; margin-top: 25px; }\n");
    printf("  .matrix-card { background: rgba(255,255,255,0.01); border: 1px solid var(--glass-border); border-radius: 18px; padding: 25px 30px; }\n");
    printf("  .matrix-card h4 { font-size: 15px; font-weight: 700; text-transform: none; margin-bottom: 22px; letter-spacing: 0.5px; }\n");
    printf("  .matrix-item-list { list-style: none; display: flex; flex-direction: column; gap: 18px; }\n");
    printf("  .matrix-row-item { font-size: 13.5px; line-height: 1.6; display: flex; gap: 12px; align-items: flex-start; }\n");
    printf("  .chk-icon { color: var(--accent-green); font-weight: 800; font-size: 15px; }\n");
    printf("  .crs-icon { color: var(--accent-red); font-weight: 800; font-size: 14px; }\n");
    
    // Dynamic Placement & Offer Listing cards matching layout properties
    printf("  .job-listing-container { display: flex; flex-direction: column; gap: 20px; margin-top: 20px; }\n");
    printf("  .offer-card { background: rgba(255,255,255,0.01); border: 1px solid var(--glass-border); border-radius: 16px; padding: 25px; transition: all 0.3s ease; position: relative; }\n");
    printf("  .offer-card:hover { border-color: var(--accent-indigo); background: rgba(255,255,255,0.03); transform: translateY(-2px); }\n");
    printf("  .tier-badge { display: inline-block; padding: 4px 10px; border-radius: 20px; font-size: 10px; font-weight: 700; text-transform: uppercase; margin-bottom: 12px; letter-spacing: 0.5px; }\n");
    printf("  .badge-high { background: rgba(16,185,129,0.12); color: var(--accent-green); }\n");
    printf("  .badge-med { background: rgba(99,102,241,0.12); color: #818cf8; }\n");
    printf("  .badge-target { background: rgba(168,85,247,0.12); color: #c084fc; }\n");
    printf("  .offer-card h4 { font-size: 17px; font-weight: 700; color: var(--text-primary); margin-bottom: 6px; }\n");
    printf("  .offer-meta { font-size: 13.5px; color: var(--text-secondary); margin-bottom: 12px; display: flex; gap: 15px; flex-wrap: wrap; }\n");
    printf("  .offer-meta strong { color: #e2e8f0; }\n");
    printf("  .offer-desc { font-size: 13px; color: #cbd5e1; line-height: 1.5; padding-top: 10px; border-top: 1px solid rgba(255,255,255,0.04); }\n");
    printf("  .portal-redirect-link { display: inline-flex; align-items: center; margin-top: 15px; font-size: 13px; font-weight: 600; color: #38bdf8; text-decoration: none; gap: 6px; transition: 0.2s; }\n");
    printf("  .portal-redirect-link:hover { color: #7dd3fc; text-decoration: underline; }\n");
    
    // Assessment Document elements
    printf("  .assessment-pre-view { background: #05070f; border: 1px solid var(--glass-border); border-radius: 14px; padding: 25px; color: #94a3b8; font-family: monospace; font-size: 12.5px; line-height: 1.6; white-space: pre-wrap; max-height: 400px; overflow-y: auto; }\n");
    printf("  .download-trigger-btn { background: linear-gradient(135deg, var(--accent-indigo), var(--accent-purple)); color: white; border: none; padding: 14px 28px; font-size: 14px; font-weight: 700; border-radius: 12px; cursor: pointer; transition: opacity 0.2s; display: inline-block; margin-top: 25px; text-decoration: none; }\n");
    printf("  .download-trigger-btn:hover { opacity: 0.9; }\n");
    
    // Gemini Advisor Chat interfaces
    printf("  .chat-view-viewport { height: 380px; overflow-y: auto; background: rgba(0,0,0,0.2); border: 1px solid var(--glass-border); border-radius: 16px; padding: 25px; display: flex; flex-direction: column; gap: 16px; margin-bottom: 20px; }\n");
    printf("  .msg-bubble { padding: 14px 20px; border-radius: 16px; font-size: 13.5px; line-height: 1.6; max-width: 82%%; word-wrap: break-word; }\n");
    printf("  .msg-bubble.user-node { background: var(--accent-indigo); color: white; align-self: flex-end; border-bottom-right-radius: 4px; }\n");
    printf("  .msg-bubble.gemini-node { background: rgba(255,255,255,0.04); color: #e2e8f0; align-self: flex-start; border-bottom-left-radius: 4px; border: 1px solid var(--glass-border); }\n");
    printf("  .chat-interactive-dock { display: flex; gap: 12px; }\n");
    printf("  .chat-interactive-dock input { flex: 1; background: rgba(0,0,0,0.3); border: 1px solid var(--glass-border); color: white; padding: 15px 20px; border-radius: 12px; font-size: 13.5px; outline: none; transition: border 0.2s; }\n");
    printf("  .chat-interactive-dock input:focus { border-color: rgba(168,85,247,0.5); }\n");
    printf("</style>\n</head>\n<body>\n");

    printf("<div class='container'>\n");
    printf("  <header>\n");
    printf("    <div>\n");
    printf("      <h1>Cognitive Skill Matrix Analysis</h1>\n");
    printf("      <p style='color: var(--text-secondary); margin-top: 4px; font-size: 14px;'>Advanced algorithmic review derived from verified backend systems</p>\n");
    printf("    </div>\n");
    printf("    <a href='/' class='reupload-btn'>Re-Upload Resume</a>\n");
    printf("  </header>\n");
    
    printf("  <div class='dashboard-grid'>\n");
    
    // Sidebar Navigation matches exactly with screenshot sequence
    printf("    <div class='sidebar'>\n");
    printf("      <button class='nav-btn active' id='btn-matrix' onclick=\"switchTab('matrix')\">Performance Matrix</button>\n");
    printf("      <button class='nav-btn' id='btn-gap' onclick=\"switchTab('gap')\">Skill Gap Analysis</button>\n");
    printf("      <button class='nav-btn' id='btn-vtu' onclick=\"switchTab('vtu')\">VTU Live Internships</button>\n");
    printf("      <button class='nav-btn' id='btn-roadmap' onclick=\"switchTab('roadmap')\">Learning Roadmap</button>\n");
    printf("      <button class='nav-btn' id='btn-report' onclick=\"switchTab('report')\">Download Report</button>\n");
    printf("      <button class='nav-btn' id='btn-chatbot' onclick=\"switchTab('chatbot')\">Gemini Assistant Chat</button>\n");
    printf("    </div>\n");

    printf("    <div class='content-panel'>\n");
    
    // ==================== TAB 1: PERFORMANCE MATRIX ====================
    printf("      <div id='tab-matrix'>\n");
    printf("        <div class='metrics-summary-box'>\n");
    printf("          <div class='radial-chart-frame'><div class='radial-chart-val'>%d%%</div></div>\n", readiness_score);
    printf("          <div>\n");
    printf("            <p style='color: var(--text-secondary); font-size: 13px; font-weight: 700; text-transform: uppercase; letter-spacing: 0.5px; margin-bottom: 4px;'>Computed Academic Performance Index</p>\n");
    printf("            <h3 style='font-size: 20px; font-weight: 700; margin-bottom: 6px;'>%0.2f CGPA</h3>\n", cgpa);
    printf("            <p style='font-size: 12px; font-weight: 700; color: #fbbf24;'>STATUS: MODERATE READINESS</p>\n");
    printf("          </div>\n");
    printf("        </div>\n");
    
    printf("        <h3 style='font-size: 16px; font-weight: 700; margin-bottom: 25px;'>Evaluated Skill Components</h3>\n");
    printf("        <div class='metrics-grid'>\n");
    printf("          <div class='progress-container'><div class='progress-header'><span>Programming Fundamentals</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_prog, skill_prog);
    printf("          <div class='progress-container'><div class='progress-header'><span>Data Structures & Algorithms</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_dsa, skill_dsa);
    printf("          <div class='progress-container'><div class='progress-header'><span>Communication Proficiency</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", skill_comm, skill_comm);
    printf("          <div class='progress-container'><div class='progress-header'><span>Applied Projects Standing</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", project_score, project_score);
    printf("          <div class='progress-container'><div class='progress-header'><span>Practical Industry Exposure</span><span>%d%%</span></div><div class='progress-track'><div class='progress-fill' style='width: %d%%;'></div></div></div>\n", experience_score, experience_score);
    printf("        </div>\n");
    printf("      </div>\n");

    // ==================== TAB 2: SKILL GAP ANALYSIS MATRIX ====================
    printf("      <div id='tab-gap' style='display:none;'>\n");
    printf("        <h3 style='font-size: 18px; font-weight: 700; margin-bottom: 5px;'>Identified Competency Gaps</h3>\n");
    printf("        <p style='color: var(--text-secondary); font-size: 13.5px; margin-bottom: 10px;'>Algorithmic verification mapping strengths against architectural requirements.</p>\n");
    printf("        <div class='matrix-layout-grid'>\n");
    
    // Column A: Strong Vectors
    printf("          <div class='matrix-card'>\n");
    printf("            <h4 style='color: var(--accent-green);'>Strong Vectors</h4>\n");
    printf("            <ul class='matrix-item-list'>\n");
    if(skill_apt >= 60) {
        printf("              <li class='matrix-item-row'><span class='chk-icon'>✓</span> Analytical Logic Aptitude Foundations</li>\n");
    }
    if(skill_prog >= 50) {
        printf("              <li class='matrix-item-row'><span class='chk-icon'>✓</span> Syntactic Layout Baseline Processing Capacity</li>\n");
    }
    printf("              <li class='matrix-item-row'><span class='chk-icon'>✓</span> Structural Code Compilation Adaptation Mechanics</li>\n");
    printf("            </ul>\n");
    printf("          </div>\n");

    // Column B: Core Opportunities to Improve
    printf("          <div class='matrix-card'>\n");
    printf("            <h4 style='color: var(--accent-red);'>Core Opportunities to Improve</h4>\n");
    printf("            <ul class='matrix-item-list'>\n");
    if(skill_dsa < 50) {
        printf("              <li class='matrix-item-row'><span class='crs-icon'>✗</span> Insufficient advanced data structure traversal mappings</li>\n");
    }
    if(skill_comm < 50) {
        printf("              <li class='matrix-item-row'><span class='crs-icon'>✗</span> Formulating structural interview verbal logic patterns</li>\n");
    }
    printf("              <li class='matrix-item-row'><span class='crs-icon'>✗</span> Consistent technical problem-solving complexity optimizations</li>\n");
    printf("            </ul>\n");
    printf("          </div>\n");
    printf("        </div>\n");
    printf("      </div>\n");

    // ==================== TAB 3: EXTENDED JOB MATCH ENGINE ====================
    printf("      <div id='tab-vtu' style='display:none;'>\n");
    printf("        <h3 style='font-size: 18px; font-weight: 700;'>Live Openings & Professional Tracks</h3>\n");
    printf("        <p style='color: var(--text-secondary); font-size: 13.5px; margin-bottom: 20px;'>Dynamic recommendations parsed from the VTU Internship Portal and active LinkedIn telemetry streams.</p>\n");
    printf("        <div class='job-listing-container'>\n");

    // Dynamic offer generations parsed dynamically using variable levels
    if(skill_dsa <= 40) {
        printf("          <div class='offer-card'>\n");
        printf("            <span class='tier-badge badge-high'>High Placement Match (Gap Remediation)</span>\n");
        printf("            <h4>Java Full Stack Internship using AI</h4>\n");
        printf("            <div class='offer-meta'>Company: <strong>KodNest Technologies Pvt Ltd</strong> | Location: <strong>Bengaluru</strong> | Duration: <strong>4 Months</strong></div>\n");
        printf("            <p class='offer-desc'><strong>Why Recommended:</strong> Your profile exhibits a critical deficiency in advanced complexity algorithms. This track injects deep structural execution matrices using object-oriented Java modules to clean up assessment metrics.</p>\n");
        printf("            <a href='https://vtu.internyet.in/' target='_blank' class='portal-redirect-link'>➔ View and Apply on VTU Internship Portal</a>\n");
        printf("          </div>\n");
    }
    
    printf("          <div class='offer-card'>\n");
    printf("            <span class='tier-badge badge-med'>Medium Placement Match</span>\n");
    printf("            <h4>Python with Data Analytics Intern</h4>\n");
    printf("            <div class='offer-meta'>Company: <strong>QSpiders Software Solutions</strong> | Location: <strong>Bengaluru Rural</strong> | Duration: <strong>4 Months</strong></div>\n");
    printf("            <p class='offer-desc'><strong>Why Recommended:</strong> Capitalizes on your solid baseline logical aptitude scoring while bypassing engineering bottlenecks in raw low-level memory allocation routines.</p>\n");
    printf("            <a href='https://vtu.internyet.in/' target='_blank' class='portal-redirect-link'>➔ View and Apply on VTU Internship Portal</a>\n");
    printf("          </div>\n");

    printf("          <div class='offer-card'>\n");
    printf("            <span class='tier-badge badge-target'>Target Backend Match</span>\n");
    printf("            <h4>Junior Backend Engineer (Go / Node.js Cluster)</h4>\n");
    printf("            <div class='offer-meta'>Source: <strong>LinkedIn Verified Corporate Board</strong> | Mode: <strong>Hybrid / Bengaluru</strong> | Level: <strong>Entry-Level</strong></div>\n");
    printf("            <p class='offer-desc'><strong>Why Recommended:</strong> Mapped directly from backend engineering posts. Targets systemic architecture creation, structured REST pipelines, caching layers, and database transactions.</p>\n");
    printf("            <a href='https://www.linkedin.com/jobs/' target='_blank' class='portal-redirect-link'>➔ Search Matching Openings on LinkedIn</a>\n");
    printf("          </div>\n");

    printf("        </div>\n");
    printf("      </div>\n");

    // ==================== TAB 4: ROBUST EXTENDED ROADMAP CHANNEL ====================
    printf("      <div id='tab-roadmap' style='display:none;'>\n");
    printf("        <h3 style='font-size: 18px; font-weight: 700; margin-bottom: 20px;'>Curated Skill Path Roadmaps</h3>\n");
    
    printf("        <div class='offer-card' style='margin-bottom: 20px;'>\n");
    printf("          <span class='tier-badge badge-high' style='background:rgba(56,189,248,0.12); color:#38bdf8;'>Interactive Platform Architecture</span>\n");
    printf("          <h4>Phase 1: Dynamic Structural Core Logic (DSA)</h4>\n");
    printf("          <p class='offer-desc' style='border:none; padding:0;'>Acquire dynamic manipulation capability over binary tree traversal algorithms, array structures, hash maps, and time complexity modeling metrics.</p>\n");
    printf("          <div style='margin-top:12px; display:flex; gap:20px;'>\n");
    printf("            <a href='https://www.geeksforgeeks.org/data-structures/' target='_blank' class='portal-redirect-link'>➔ Open GeeksforGeeks Portal</a>\n");
    printf("            <a href='https://roadmap.sh/computer-science' target='_blank' class='portal-redirect-link'>➔ View Computer Science Roadmap</a>\n");
    printf("          </div>\n");
    printf("        </div>\n");

    printf("        <div class='offer-card'>\n");
    printf("          <span class='tier-badge badge-med'>Structured Video Assets</span>\n");
    printf("          <h4>Phase 2: Modern Systems Optimization Channels</h4>\n");
    printf("          <p class='offer-desc' style='border:none; padding:0;'>Accelerate practical engine mechanics, database partitioning paradigms, microservices, system layout design rules, and terminal deployment strategies.</p>\n");
    printf("          <div style='margin-top:12px; display:flex; gap:20px;'>\n");
    printf("            <a href='https://www.youtube.com/c/Freecodecamp' target='_blank' class='portal-redirect-link'>➔ freeCodeCamp Systems Pipeline</a>\n");
    printf("            <a href='https://www.youtube.com/playlist?list=PL4cUxeGkcC9gcy9lrvMJLO5z9maPoZGsY' target='_blank' class='portal-redirect-link'>➔ Net Ninja Backend Node.js Analytics</a>\n");
    printf("          </div>\n");
    printf("        </div>\n");
    printf("      </div>\n");

    // ==================== TAB 5: COMPREHENSIVE TEXTUAL REPORT GENERATION ====================
    printf("      <div id='tab-report' style='display:none;'>\n");
    printf("        <h3 style='font-size: 18px; font-weight: 700; margin-bottom: 15px;'>Placement Assessment Report</h3>\n");
    printf("        <div class='assessment-pre-view' id='raw-report-buffer'>=================================================================================\n");
    printf("                 COMPREHENSIVE PLACEMENT ARCHITECTURE ASSESSMENT REPORT          \n");
    printf("=================================================================================\n\n");
    printf("CANDIDATE IDENTIFICATION PROFILE:\n");
    printf("---------------------------------------------------------------------------------\n");
    printf(" Candidate Reference Identification Tag : %s\n", student_name);
    printf(" Extracted Academic CGPA Metric        : %0.2f / 10.00\n", cgpa);
    printf(" Computed Evaluation Readiness Index    : %d%% Index Matrix Rating\n\n", readiness_score);
    printf("DETAILED METRIC COMPONENT VECTOR SPLIT:\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("  * Basic Logic & Syntax Foundations    : %d%%\n", skill_prog);
    printf("  * Algorithmic Traversal Matrices (DSA): %d%%\n", skill_dsa);
    printf("  * Enterprise Verbal Presentation Track : %d%%\n", skill_comm);
    printf("  * Analytical Quantitative Velocity    : %d%%\n", skill_apt);
    printf("  * System Architecture Project Value    : %d%%\n", project_score);
    printf("  * Practical Industry Experience Vector : %d%%\n\n", experience_score);
    printf("CRITICAL ARCHITECTURAL SKILL GAPS IDENTIFIED:\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("  * PRIMARY STRUCTURAL SHORTFALL POINT  : %s\n", major_gap);
    printf("  * SYSTEM DIAGNOSTIC DETAILSATION      : %s\n\n", gap_description);
    printf("TAILORED STRATEGIC ACCELERATION REMEDIATIONS:\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("  1. Dedicate 120 minutes daily solving dynamic array and graph problems on GeeksforGeeks.\n");
    printf("  2. Construct functional asynchronous REST endpoints using Node.js/Go to balance project score lines.\n");
    printf("  3. Apply directly to matching entry tracks on the VTU Internship Portal (https://vtu.internyet.in/).\n");
    printf("=================================================================================</div >\n");
    printf("        <button class='download-trigger-btn' onclick='triggerReportDownload()'>Download Text Document (.txt)</button>\n");
    printf("      </div>\n");

    // ==================== TAB 6: INTELLIGENT GEMINI AI ASSISTANT CHAT ====================
    printf("      <div id='tab-chatbot' style='display:none;'>\n");
    printf("        <h3 style='font-size: 18px; font-weight: 700; margin-bottom: 4px;'>Gemini Copilot Assistant</h3>\n");
    printf("        <p style='color: var(--text-secondary); font-size: 13.5px; margin-bottom: 20px;'>Your dedicated advisor, pre-loaded with your assessment profile parameters.</p>\n");
    
    printf("        <div class='chat-view-viewport' id='chat-nodes-box'>\n");
    printf("          <div class='msg-bubble gemini-node'>\n");
    printf("            Hello <strong>%s</strong>. I have comprehensively initialized your skill vector parameters into my working memory architecture:<br><br>\n", student_name);
    printf("            • Academic Standing: <strong>%0.2f CGPA</strong><br>\n", cgpa);
    printf("            • Readiness Benchmark: <strong>%d%% Index</strong><br>\n", readiness_score);
    printf("            • Target Deficit: <strong style='color:#fca5a5;'>%s</strong> (%s)<br><br>\n", major_gap, gap_description);
    printf("            Ask me anything! I can give you detailed technical explanations, targeted learning notes, or point you toward matching backend internships on LinkedIn and the VTU network.\n");
    printf("          </div>\n");
    printf("        </div>\n");
    
    printf("        <div class='chat-interactive-dock'>\n");
    printf("          <input type='text' id='user-raw-query' placeholder='Type a message to Gemini...' onkeydown='if(event.key===\"Enter\") processGeminiQuery()'>\n");
    printf("          <button class='download-trigger-btn' style='margin:0; padding: 15px 25px;' onclick='processGeminiQuery()'>Ask</button>\n");
    printf("        </div>\n");
    printf("      </div>\n");

    printf("    </div>\n"); 
    printf("  </div>\n"); 
    printf("</div>\n"); 

    // Front-End Application State Management and Asynchronous Logic Triggers
    printf("<script>\n");
    printf("  function switchTab(tabId) {\n");
    printf("    const tabList = ['matrix', 'gap', 'vtu', 'roadmap', 'report', 'chatbot'];\n");
    printf("    tabList.forEach(t => {\n");
    printf("      document.getElementById('tab-' + t).style.display = (t === tabId) ? 'block' : 'none';\n");
    printf("      document.getElementById('btn-' + t).classList.remove('active');\n");
    printf("    });\n");
    printf("    document.getElementById('btn-' + tabId).classList.add('active');\n");
    printf("  }\n");

    printf("  function triggerReportDownload() {\n");
    printf("    const payload = document.getElementById('raw-report-buffer').innerText;\n");
    printf("    const metaBlob = new Blob([payload], { type: 'text/plain' });\n");
    printf("    const linkNode = document.createElement('a');\n");
    printf("    linkNode.download = 'Placement_Readiness_Assessment_%s.txt';\n", student_name);
    printf("    linkNode.href = window.URL.createObjectURL(metaBlob);\n");
    printf("    document.body.appendChild(linkNode);\n");
    printf("    linkNode.click();\n");
    printf("    document.body.removeChild(linkNode);\n");
    printf("  }\n");

    // Highly Responsive Contextual Text Parsing Engine (Gemini Simulated Cognitive Core)
    printf("  function processGeminiQuery() {\n");
    printf("    const terminalInput = document.getElementById('user-raw-query');\n");
    printf("    const board = document.getElementById('chat-nodes-box');\n");
    printf("    const cleanText = terminalInput.value.trim();\n");
    printf("    if(!cleanText) return;\n");
    
    printf("    board.innerHTML += '<div class=\"msg-bubble user-node\">' + cleanText + '</div>';\n");
    printf("    let normalQuery = cleanText.toLowerCase();\n");
    printf("    let outReply = '';\n");

    // Advanced dynamic mapping of queries to technical responses
    printf("    if(normalQuery.includes('notes') || normalQuery.includes('learn') || normalQuery.includes('explain') || normalQuery.includes('dsa')) {\n");
    printf("      outReply = '<strong>Gemini Assistant:</strong> Here is a concise technical brief on resolving your algorithmic memory constraints:<br><br>' +\n");
    printf("                 '<strong>1. Big-O Complexity Foundations:</strong> Ensure all traversal designs use structural sorting loops to stay within $O(N \\log N)$ limits rather than collapsing into nested $O(N^2)$ tracking layouts.<br>' +\n");
    printf("                 '<strong>2. Pointer Architectures:</strong> When analyzing linked lists, anchor a two-pointer architecture (fast/slow) to avoid duplicate stack traces.<br><br>' +\n");
    printf("                 '<em>Useful Resource Highlight:</em> Review the video channels provided in the <strong>Learning Roadmap</strong> tab to ground these concepts.';\n");
    printf("    } else if(normalQuery.includes('internship') || normalQuery.includes('job') || normalQuery.includes('apply') || normalQuery.includes('vtu') || normalQuery.includes('linkedin')) {\n");
    printf("      outReply = '<strong>Gemini Assistant:</strong> I have optimized multiple tracking channels for your profile. ' +\n");
    printf("                 'For specialized regional programs, load the <strong>VTU Internship Portal</strong> to view positions like the Java track at KodNest designed to bridge your data optimization gaps. ' +\n");
    printf("                 'If you are seeking general entry tracks, check <strong>LinkedIn Jobs</strong> using keywords matching your target framework specifications.';\n");
    printf("    } else if(normalQuery.includes('resource') || normalQuery.includes('website') || normalQuery.includes('youtube')) {\n");
    printf("      outReply = '<strong>Gemini Assistant:</strong> I highly recommend referencing <strong>roadmap.sh</strong> for comprehensive structural maps. For interactive coding exercises, utilize <strong>GeeksforGeeks</strong>. If you learn best from videos, follow <strong>freeCodeCamp</strong> for back-end engineering pipelines and <strong>The Net Ninja</strong> for full-stack JavaScript architectures.';\n");
    printf("    } else if(normalQuery.includes('clear') || normalQuery.includes('improve') || normalQuery.includes('score')) {\n");
    printf("      outReply = '<strong>Gemini Assistant:</strong> The fastest track to lift your score from %d%% is mitigating your primary deficiency: <strong>%s</strong>. Try creating modular backend utilities, tracking execution speed changes, and practicing time-bound practice tests.';\n", readiness_score, major_gap);
    printf("    } else {\n");
    printf("      outReply = '<strong>Gemini Assistant:</strong> That is an interesting query. To assist you accurately, would you like me to provide <strong>detailed learning notes</strong> for your target modules, locate matching <strong>internship listings</strong> on the VTU portal, or suggest structured <strong>YouTube resource tracks</strong>?';\n");
    printf("    }\n");
    
    printf("    setTimeout(() => {\n");
    printf("      board.innerHTML += '<div class=\"msg-bubble gemini-node\">' + outReply + '</div>';\n");
    printf("      board.scrollTop = board.scrollHeight;\n");
    printf("    }, 355);\n");
    printf("    terminalInput.value = '';\n");
    printf("  }\n");
    printf("</script>\n");

    printf("</body>\n</html>\n");
    return 0;
}