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
    char strengths[10][50];
    int strength_count = 0;
    int strength_found = 0;
    int gap_found = 0;
    printf("<div id='tab-gap' style='display:none;'>\n");
    printf("<h3 style='font-size: 18px; font-weight: 700; margin-bottom: 5px;'>Identified Competency Gaps</h3>\n");
    printf("<p style='color: var(--text-secondary); font-size: 13.5px; margin-bottom: 10px;'>Rule-based analysis of candidate strengths and improvement areas based on extracted resume metrics.</p>\n");
    printf("<div class='matrix-layout-grid'>\n");
        /* ================= STRONG AREAS ================= */
    printf("<div class='matrix-card'>\n");
    printf("<h4 style='color: var(--accent-green);'>Strong Competencies</h4>\n");
    printf("<ul class='matrix-item-list'>\n");
    if(skill_prog >= 50)
    {
        strength_found = 1;
        strcpy(strengths[strength_count], "Programming");
        strength_count++;
        printf("<li class='matrix-item-row'><span class='chk-icon'>OK</span> Programming Fundamentals and Coding Ability</li>\n");
    }
    if(skill_dsa >= 50)
    {
    strength_found = 1;
    strcpy(strengths[strength_count], "Data Structures");
    strength_count++;
    printf("<li class='matrix-item-row'><span class='chk-icon'>OK</span> Data Structures and Algorithmic Understanding</li>\n");
    }
    if(skill_apt >= 60)
    {
    strength_found = 1;
    printf("<li class='matrix-item-row'><span class='chk-icon'>OK</span> Analytical Thinking and Logical Reasoning</li>\n");
    }
    if(skill_comm >= 60)
    {
    strength_found = 1;
    strcpy(strengths[strength_count], "Communication");
    strength_count++;
    printf("<li class='matrix-item-row'><span class='chk-icon'>OK</span> Communication and Interview Readiness</li>\n");
    }
    if(project_score >= 50)
    {
    strength_found = 1;
    strcpy(strengths[strength_count], "Software Development");
    strength_count++;
    printf("<li class='matrix-item-row'><span class='chk-icon'>OK</span> Practical Project Development Experience</li>\n");
    }
    if(strength_found == 0)
    {
    printf("<li class='matrix-item-row'><span class='chk-icon'>-</span> No major strengths identified yet</li>\n");
    }
    printf("</ul>\n");
    printf("</div>\n");
    /* ================= IMPROVEMENT AREAS ================= */
    printf("<div class='matrix-card'>\n");
    printf("<h4 style='color: var(--accent-red);'>Areas Requiring Improvement</h4>\n");
    printf("<ul class='matrix-item-list'>\n");
    if(skill_prog < 50)
    {
    gap_found = 1;
    printf("<li class='matrix-item-row'><span class='crs-icon'>!</span> Improve Programming Fundamentals and Coding Practice</li>\n");
    }
    if(skill_dsa < 50)
    {
    gap_found = 1;
    printf("<li class='matrix-item-row'><span class='crs-icon'>!</span> Strengthen Data Structures and Algorithmic Problem Solving</li>\n");
    }
    if(skill_comm < 50)
    {
    gap_found = 1;
    printf("<li class='matrix-item-row'><span class='crs-icon'>!</span> Develop Technical Communication and Interview Skills</li>\n");
    }
    if(skill_apt < 50)
    {
    gap_found = 1;
    printf("<li class='matrix-item-row'><span class='crs-icon'>!</span> Improve Quantitative Aptitude and Logical Reasoning</li>\n");
    }
    if(project_score < 50)
    {
    gap_found = 1;
    printf("<li class='matrix-item-row'><span class='crs-icon'>!</span> Gain More Hands-on Project Development Experience</li>\n");
    }
    if(experience_score < 50)
    {
    gap_found = 1;
    printf("<li class='matrix-item-row'><span class='crs-icon'>!</span> Build Industry Exposure Through Internships</li>\n");
    }
    if(gap_found == 0)
    {
    printf("<li class='matrix-item-row'><span class='chk-icon'>OK</span> No major competency gaps detected</li>\n");
    }
    printf("</ul>\n");
    printf("</div>\n");
    printf("</div>\n");
    printf("</div>\n");

    // ==================== TAB 3: SKILL BASED INTERNSHIP RECOMMENDATION ENGINE ====================

printf("      <div id='tab-vtu' style='display:none;'>\n");
printf("        <h3 style='font-size: 18px; font-weight: 700;'>Recommended Career Opportunities</h3>\n");
printf("        <p style='color: var(--text-secondary); font-size: 13.5px; margin-bottom: 20px;'>");
printf("Personalized internship recommendations generated from your identified strengths and competency profile.</p>\n");
printf("        <div class='job-listing-container'>\n");
// Check if strengths exist
if(strength_count == 0)
{
    printf("<div class='offer-card'>\n");
    printf("<span class='tier-badge badge-high'>Profile Analysis Required</span>\n");
    printf("<h4>No Matching Opportunities Generated</h4>\n");
    printf("<p class='offer-desc'>");
    printf("Improve your skill profile to unlock personalized internship recommendations.");
    printf("</p>\n");
    printf("</div>\n");
}
// Generate recommendations based on strengths
for(int i = 0; i < strength_count; i++)
{
    printf("<div class='offer-card'>\n");
    printf("<span class='tier-badge badge-med'>Skill Matched Opportunity</span>\n");
    printf("<h4>%s Based Internships</h4>\n", strengths[i]);
    printf("<div class='offer-meta'>");
    printf("Recommended Skill: <strong>%s</strong>", strengths[i]);
    printf("</div>\n");
    printf("<p class='offer-desc'>");
    printf("<strong>Why Recommended:</strong> ");
    printf("Your resume analysis indicates strength in %s. ");
    printf("Relevant internship roles have been suggested from external career platforms.");
    printf("</p>\n", strengths[i]);
    // Programming recommendation
    if(strcmp(strengths[i],"Programming") == 0)
    {
        printf("<a href='https://www.linkedin.com/jobs/search/?keywords=Programming%%20Internship' target='_blank' class='portal-redirect-link'>");
        printf("➔ Search Programming Internships on LinkedIn</a><br>\n");

        printf("<a href='https://vtu.internyet.in/internships?q=programming' target='_blank' class='portal-redirect-link'>");
        printf("➔ Explore VTU Internship Portal</a>\n");
    }
    // DSA recommendation
    else if(strcmp(strengths[i],"Data Structures") == 0)
    {
        printf("<a href='https://www.linkedin.com/jobs/search/?keywords=Software%%20Engineer%%20Internship' target='_blank' class='portal-redirect-link'>");
        printf("➔ Search Software Development Internships on LinkedIn</a><br>\n");

        printf("<a href='https://vtu.internyet.in/internships?q=software%%20engineer' target='_blank' class='portal-redirect-link'>");
        printf("➔ Explore VTU Internship Portal</a>\n");
    }
    // Project recommendation
    else if(strcmp(strengths[i],"Software Development") == 0)
    {
        printf("<a href='https://www.linkedin.com/jobs/search/?keywords=Full%%20Stack%%20Internship' target='_blank' class='portal-redirect-link'>");
        printf("➔ Search Full Stack Internships on LinkedIn</a><br>\n");

        printf("<a href='https://vtu.internyet.in/internships?q=software%%20developer' target='_blank' class='portal-redirect-link'>");
        printf("➔ Explore VTU Internship Portal</a>\n");
    }
    // Communication recommendation
    else if(strcmp(strengths[i],"Communication") == 0)
    {
        printf("<a href='https://www.linkedin.com/jobs/search/?keywords=Business%%20Analyst%%20Internship' target='_blank' class='portal-redirect-link'>");
        printf("➔ Search Analyst Internships on LinkedIn</a><br>\n");
    }
    printf("</div>\n");
}
printf("        </div>\n");
printf("      </div>\n");

    // ==================== TAB 4: ROBUST EXTENDED ROADMAP CHANNEL ====================

printf(" <div id='tab-roadmap' style='display:none;'>\n");
printf(" <h3 style='font-size: 18px; font-weight: 700; margin-bottom: 20px;'>Personalized Skill Path Roadmap</h3>\n");


if(skill_prog < 50)
{
    printf(" <div class='offer-card' style='margin-bottom:20px;'>\n");
    printf(" <span class='tier-badge badge-high'>Programming Skill Gap</span>\n");
    printf(" <h4>Strengthen Programming Fundamentals</h4>\n");
    printf(" <p class='offer-desc' style='border:none; padding:0;'>Your programming score indicates improvement is required. Focus on C programming, syntax, debugging, problem solving and coding practice.</p>\n");
    printf(" <div style='margin-top:12px; display:flex; gap:15px;'>\n");
    printf(" <a href='https://www.youtube.com/@freecodecamp' target='_blank' class='portal-redirect-link'>➔ FreeCodeCamp Videos</a>\n");
    printf(" </div>\n");
    printf(" </div>\n");
}


if(skill_dsa < 50)
{
    printf(" <div class='offer-card' style='margin-bottom:20px;'>\n");
    printf(" <span class='tier-badge badge-high'>DSA Skill Gap</span>\n");
    printf(" <h4>Improve Data Structures and Algorithms</h4>\n");
    printf(" <p class='offer-desc' style='border:none; padding:0;'>Develop algorithmic thinking by practicing arrays, linked lists, stacks, queues, trees, graphs, sorting and complexity analysis.</p>\n");
    printf(" <div style='margin-top:12px; display:flex; gap:15px;'>\n");
    printf(" <a href='https://www.geeksforgeeks.org/data-structures/' target='_blank' class='portal-redirect-link'>➔ GeeksForGeeks DSA</a>\n");
    printf(" <a href='https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z' target='_blank' class='portal-redirect-link'>➔ Striver DSA Roadmap</a>\n");
    printf(" </div>\n");
    printf(" </div>\n");
}


if(skill_comm < 50)
{
    printf(" <div class='offer-card' style='margin-bottom:20px;'>\n");
    printf(" <span class='tier-badge badge-med'>Communication Improvement</span>\n");
    printf(" <h4>Enhance Interview Communication</h4>\n");
    printf(" <p class='offer-desc' style='border:none; padding:0;'>Improve technical communication, presentation skills and confidence through mock interviews.</p>\n");
    printf(" <div style='margin-top:12px; display:flex; gap:15px;'>\n");
    printf(" <a href='https://www.coursera.org/learn/communication-skills' target='_blank' class='portal-redirect-link'>➔ Communication Skills Course</a>\n");
    printf(" </div>\n");
    printf(" </div>\n");
}


if(skill_apt < 50)
{
    printf(" <div class='offer-card' style='margin-bottom:20px;'>\n");
    printf(" <span class='tier-badge badge-med'>Aptitude Development</span>\n");
    printf(" <h4>Placement Aptitude Preparation</h4>\n");
    printf(" <p class='offer-desc' style='border:none; padding:0;'>Practice quantitative aptitude, logical reasoning and placement examination problems.</p>\n");
    printf(" <div style='margin-top:12px; display:flex; gap:15px;'>\n");
    printf(" <a href='https://www.indiabix.com/' target='_blank' class='portal-redirect-link'>➔ IndiaBix Aptitude Practice</a>\n");
    printf(" </div>\n");
    printf(" </div>\n");
}


if(project_score < 50)
{
    printf(" <div class='offer-card' style='margin-bottom:20px;'>\n");
    printf(" <span class='tier-badge badge-target'>Project Enhancement</span>\n");
    printf(" <h4>Build Technical Projects</h4>\n");
    printf(" <p class='offer-desc' style='border:none; padding:0;'>Develop practical projects, improve your GitHub portfolio and gain hands-on implementation experience.</p>\n");
    printf(" <div style='margin-top:12px; display:flex; gap:15px;'>\n");
    printf(" <a href='https://github.com/topics/beginner-projects' target='_blank' class='portal-redirect-link'>➔ GitHub Project Ideas</a>\n");
    printf(" <a href='https://roadmap.sh/' target='_blank' class='portal-redirect-link'>➔ Developer Roadmaps</a>\n");
    printf(" </div>\n");
    printf(" </div>\n");
}


if(experience_score < 50)
{
    printf(" <div class='offer-card' style='margin-bottom:20px;'>\n");
    printf(" <span class='tier-badge badge-target'>Industry Preparation</span>\n");
    printf(" <h4>Gain Internship Experience</h4>\n");
    printf(" <p class='offer-desc' style='border:none; padding:0;'>Apply for internships and technical programs to gain real-world industry exposure.</p>\n");
    printf(" <div style='margin-top:12px; display:flex; gap:15px;'>\n");
    printf(" <a href='https://vtu.internyet.in/' target='_blank' class='portal-redirect-link'>➔ VTU Internship Portal</a>\n");
    printf(" <a href='https://www.linkedin.com/jobs/' target='_blank' class='portal-redirect-link'>➔ LinkedIn Jobs</a>\n");
    printf(" </div>\n");
    printf(" </div>\n");
    }
    printf(" </div>\n");
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
    printf("TAILORED SKILL DEVELOPMENT RECOMMENDATIONS:\n");
    printf("---------------------------------------------------------------------------------\n");
    if(strcmp(major_gap,"Data Structures & Algorithms") == 0)
    {
        printf("  1. Strengthen algorithmic problem-solving skills by practicing arrays, trees, graphs, and dynamic programming problems.\n");
        printf("  2. Regularly solve coding challenges on platforms such as GeeksforGeeks and LeetCode to improve implementation efficiency.\n");
        printf("  3. Explore Software Engineer internship opportunities that emphasize strong data structures and problem-solving skills.\n");
    }
    else if(strcmp(major_gap,"Programming Fundamentals") == 0)
    {
        printf("  1. Improve programming foundations by strengthening syntax, logic building, and object-oriented programming concepts.\n");
        printf("  2. Develop small-scale projects to gain practical implementation experience.\n");
        printf("  3. Practice coding exercises regularly to improve programming confidence and accuracy.\n");
    }

    else if(strcmp(major_gap,"Communication Proficiency") == 0)
    {
        printf("  1. Enhance technical communication skills through mock interviews and project explanations.\n");
        printf("  2. Practice presenting technical concepts clearly and effectively.\n");
        printf("  3. Participate in discussions, presentations, and collaborative activities to improve professional communication.\n");
    }   

   else if(strcmp(major_gap,"Quantitative Aptitude") == 0)
    {
        printf("  1. Improve quantitative reasoning through regular practice of aptitude and logical reasoning problems.\n");
        printf("  2. Analyze placement assessment patterns and develop faster problem-solving approaches.\n");
        printf("  3. Strengthen mathematical reasoning required for technical recruitment processes.\n");
    }

    printf("  4. Explore suitable internship opportunities through verified career platforms such as the VTU Internship Portal and LinkedIn.\n");
    printf("=================================================================================\n");
    printf("</div>\n");
    printf("<button class='download-trigger-btn' onclick='triggerReportDownload()'>Download Text Document (.txt)</button>\n");
    printf(" </div>\n");

    // ==================== TAB 6: INTELLIGENT GEMINI AI ASSISTANT CHAT ====================
    printf("      <div id='tab-chatbot' style='display:none;'>\n");
    printf("        <h3 style='font-size: 18px; font-weight: 700; margin-bottom: 4px;'>Gemini Copilot Assistant</h3>\n");
    printf("        <p style='color: var(--text-secondary); font-size: 13.5px; margin-bottom: 20px;'>Your dedicated advisor, pre-loaded with your assessment profile parameters.</p>\n");
    
    printf("        <div class='chat-view-viewport' id='chat-nodes-box'>\n");
    printf("          <div class='msg-bubble gemini-node'>\n");
    printf("            Hello <strong>%s</strong>. I have comprehensively initialized your skill vector parameters into my working memory architecture:<br><br>\n", student_name);
    printf("            &bull; Academic Standing: <strong>%0.2f CGPA</strong><br>\n", cgpa);
    printf("            &bull; Readiness Benchmark: <strong>%d%% Index</strong><br>\n", readiness_score);
    printf("            &bull; Target Deficit: <strong style='color:#fca5a5;'>%s</strong> (%s)<br><br>\n", major_gap, gap_description);printf("            Ask me anything! I can give you detailed technical explanations, targeted learning notes, or point you toward matching backend internships on LinkedIn and the VTU network.\n");
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
    printf("  function formatGeminiReply(text) {\n");
    printf("    return text\n");
    printf("      .replace(/^### (.*$)/gm, '<h3>$1</h3>')\n");
    printf("      .replace(/^## (.*$)/gm, '<h2>$1</h2>')\n");
    printf("      .replace(/\\*\\*(.*?)\\*\\*/g, '<strong>$1</strong>')\n");
    printf("      .replace(/^\\* (.*$)/gm, '<li>$1</li>')\n");
    printf("      .replace(/\\n/g, '<br>');\n");
    printf("  }\n");
    printf("  async function processGeminiQuery() {\n");
    printf("    const terminalInput = document.getElementById('user-raw-query');\n");
    printf("    const board = document.getElementById('chat-nodes-box');\n");
    printf("    const cleanText = terminalInput.value.trim();\n");
    printf("    if(!cleanText) return;\n");
    printf("    board.innerHTML += '<div class=\"msg-bubble user-node\">' + cleanText + '</div>';\n");
    printf("    const profile = {\n");
    printf("       name: '%s',\n", student_name);
    printf("       cgpa: %f,\n", cgpa);
    printf("       programming: %d,\n", skill_prog);
    printf("       dsa: %d,\n", skill_dsa);
    printf("       communication: %d,\n", skill_comm);
    printf("       projects: %d,\n", project_score);
    printf("       gap: \"%s\"\n", major_gap);
    printf("    };\n");
    printf("    try {\n");
    printf("       let response = await fetch('/chat', {\n");
    printf("          method:'POST',\n");
    printf("          headers:{'Content-Type':'application/json'},\n");
    printf("          body: JSON.stringify({\n");
    printf("              question: cleanText,\n");
    printf("              profile: profile\n");
    printf("          })\n");
    printf("       });\n");
    printf("       let data = await response.json();\n");
    printf("       if(data.reply){\n");
    printf("       board.innerHTML += '<div class=\"msg-bubble gemini-node\">' +\n");
    printf("       '<strong>Gemini Assistant:</strong><br><br>' +\n");
    printf("       formatGeminiReply(data.reply) +\n");
    printf("       '</div>';\n");
    printf("       }\n");
    printf("       else{\n");
    printf("          board.innerHTML += '<div class=\"msg-bubble gemini-node\">No response received from Gemini.</div>';\n");
    printf("       }\n");printf("    }\n");
    printf("    catch(error){\n");
    printf("       board.innerHTML += '<div class=\"msg-bubble gemini-node\">Gemini connection failed.</div>';\n");
    printf("    }\n");
    printf("    terminalInput.value='';\n");
    printf("    board.scrollTop = board.scrollHeight;\n");
    printf("  }\n");
    printf("</script>\n");

    printf("</body>\n</html>\n");
    return 0;
}