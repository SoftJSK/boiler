#include "generate.h"
#include "main.h"
#include <iostream>
#include <string>

void generate(char *lang) {
    std::string cmd;
    std::string tpath = "/usr/share/boiler/template/"; // if modified, you must also modify the install.sh and uninstall.sh scripts as well
    std::string langNameStr = std::string(lang);
    if (langNameStr == "c") { // to add a new template, simply copy and paste one of the existing ones and change the file name and extension (if needed)
        cmd = "cp " + tpath + "main.c main.c"; // for the template to work copy the template file (or folder) to what the tpath variable is set to
        system((cmd).c_str());
    } else if (langNameStr == "cpp" || langNameStr == "c++") {
        cmd = "cp " + tpath + "main.cpp main.cpp";
        system((cmd).c_str());
    } else if (langNameStr == "python" || langNameStr == "py") { // || = or
        cmd = "cp " + tpath + "main.py main.py";
        system((cmd).c_str()); 
    } else if (langNameStr == "batch" || langNameStr == "bat") {
        cmd = "cp " + tpath + "main.bat main.bat";
        system((cmd).c_str()); 
    } else if (langNameStr == "clojure" || langNameStr == "clj") {
        cmd = "cp " + tpath + "main.clj main.clj";
        system((cmd).c_str()); 
    } else if (langNameStr == "c#" || langNameStr == "csharp" || langNameStr == "cs") {
        cmd = "cp " + tpath + "main.cs main.cs";
        system((cmd).c_str()); 
    } else if (langNameStr == "css" || langNameStr == "css3") {
        cmd = "cp " + tpath + "main.css main.css";
        system((cmd).c_str()); 
    } else if (langNameStr == "dlang" || langNameStr == "d") {
        cmd = "cp " + tpath + "main.d main.d";
        system((cmd).c_str()); 
    } else if (langNameStr == "dart") {
        cmd = "cp " + tpath + "main.dart main.dart";
        system((cmd).c_str());
    } else if (langNameStr == "fs" || langNameStr == "fsharp" || langNameStr == "f#") {
        cmd = "cp " + tpath + "main.fs main.fs";
        system((cmd).c_str());
    } else if (langNameStr == "go" || langNameStr == "golang") {
        cmd = "cp " + tpath + "main.go main.go";
        system((cmd).c_str());
    } else if (langNameStr == "h" || langNameStr == "header") {
        cmd = "cp " + tpath + "main.h main.h";
        system((cmd).c_str());
    } else if (langNameStr == "html" || langNameStr == "html5") {
        cmd = "cp " + tpath + "main.html main.html";
        system((cmd).c_str());
    } else if (langNameStr == "java") {
        cmd = "cp " + tpath + "main.java main.java";
        system((cmd).c_str());
    } else if (langNameStr == "js" || langNameStr == "javascript") {
        cmd = "cp " + tpath + "main.js main.js";
        system((cmd).c_str());
    } else if (langNameStr == "lua") {
        cmd = "cp " + tpath + "main.lua main.lua";
        system((cmd).c_str());
    } else if (langNameStr == "objc" || langNameStr == "objectivec" || langNameStr == "m") {
        cmd = "cp " + tpath + "main.m main.m";
        system((cmd).c_str());
    } else if (langNameStr == "md" || langNameStr == "markdown") {
        cmd = "cp " + tpath + "main.md main.md";
        system((cmd).c_str());
    } else if (langNameStr == "php") {
        cmd = "cp " + tpath + "main.php main.php";
        system((cmd).c_str());
    } else if (langNameStr == "pl" || langNameStr == "perl") {
        cmd = "cp " + tpath + "main.pl main.pl";
        system((cmd).c_str());
    } else if (langNameStr == "ps1" || langNameStr == "powershell") {
        cmd = "cp " + tpath + "main.ps1 main.ps1";
        system((cmd).c_str());
    } else if (langNameStr == "rb" || langNameStr == "ruby") {
        cmd = "cp " + tpath + "main.rb main.rb";
        system((cmd).c_str());
    } else if (langNameStr == "rs" || langNameStr == "rust") {
        cmd = "cp " + tpath + "main.rs main.rs";
        system((cmd).c_str());
    } else if (langNameStr == "sh" || langNameStr == "shell" || langNameStr == "bash") {
        cmd = "cp " + tpath + "main.sh main.sh";
        system((cmd).c_str());
    } else if (langNameStr == "swift") {
        cmd = "cp " + tpath + "main.swift main.swift";
        system((cmd).c_str());
    } else if (langNameStr == "fortran" || langNameStr == "f90") {
        cmd = "cp " + tpath + "main.f90 main.f90";
        system((cmd).c_str());
    } else if (langNameStr == "kotlin" || langNameStr == "kt") {
        cmd = "cp " + tpath + "main.kt main.kt";
        system((cmd).c_str());
    } else if (langNameStr == "typescript" || langNameStr == "ts") {
        cmd = "cp " + tpath + "main.ts main.ts";
        system((cmd).c_str());
    } else if (langNameStr == "julia" || langNameStr == "jl") {
        cmd = "cp " + tpath + "main.jl main.jl";
        system((cmd).c_str());
    } else if (langNameStr == "r") {
        cmd = "cp " + tpath + "main.r main.r";
        system((cmd).c_str());
    } else if (langNameStr == "scala") {
        cmd = "cp " + tpath + "main.scala main.scala";
        system((cmd).c_str());
    } else if (langNameStr == "html-js") {
        cmd = "cp " + tpath + "main.html main.html";
        system((cmd).c_str());
        cmd = "cp " + tpath + "main.js script.js";
        system((cmd).c_str());
        cmd = "cp " + tpath + "main.css style.css";
        system((cmd).c_str());
    } else if (langNameStr == "html-ts") {
        cmd = "cp " + tpath + "main.html main.html";
        system((cmd).c_str());
        cmd = "cp " + tpath + "main.ts script.ts";
        system((cmd).c_str());
        cmd = "cp " + tpath + "main.css style.css";
        system((cmd).c_str());
    } else if (langNameStr == "cpp-proj" || langNameStr == "c++-proj") {
        cmd = "cp " + tpath + "main.cpp main.cpp";
        system((cmd).c_str());
        cmd = "cp " + tpath + "main.h main.h";
        system((cmd).c_str());
    } else if (langNameStr == "c-proj") {
        cmd = "cp " + tpath + "main.c main.c";
        system((cmd).c_str());
        cmd = "cp " + tpath + "main.h main.h";
        system((cmd).c_str());
    } else {
        std::cout << "Unknown language.\nSyntax: \nboiler *programming language name* -- generates boilerplate in current directory (programming language name must be lowercase)\nboiler *anything else* -- bring up this menu\nTip: You can use programming language file extensions instead of names for quicker use.\n";
    }
}