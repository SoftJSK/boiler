#include "generate.h"
#include "main.h"
#include <iostream>
#include <string>

void generate(char *lang) {
    std::string cmd;
    std::string tpath = "/usr/share/boiler/template/";
    std::string langNameStr = std::string(lang);
    // this is one of the contenders for the worst code i ever wrote
    if (langNameStr == "c") {
        std::string cmd = "cp " + tpath + "main.c main.c";
        system((cmd).c_str());
    } else if (langNameStr == "cpp" || langNameStr == "c++") {
        std::string cmd = "cp " + tpath + "main.cpp main.cpp";
        system((cmd).c_str());
    } else if (langNameStr == "python" || langNameStr == "py") {
        std::string cmd = "cp " + tpath + "main.py main.py";
        system((cmd).c_str()); 
    } else if (langNameStr == "batch" || langNameStr == "bat") {
        std::string cmd = "cp " + tpath + "main.bat main.bat";
        system((cmd).c_str()); 
    } else if (langNameStr == "clojure" || langNameStr == "clj") {
        std::string cmd = "cp " + tpath + "main.clj main.clj";
        system((cmd).c_str()); 
    } else if (langNameStr == "c#" || langNameStr == "csharp" || langNameStr == "cs") {
        std::string cmd = "cp " + tpath + "main.cs main.cs";
        system((cmd).c_str()); 
    } else if (langNameStr == "css" || langNameStr == "css3") {
        std::string cmd = "cp " + tpath + "main.css main.css";
        system((cmd).c_str()); 
    } else if (langNameStr == "dlang" || langNameStr == "d") {
        std::string cmd = "cp " + tpath + "main.d main.d";
        system((cmd).c_str()); 
    } else if (langNameStr == "dart") {
        std::string cmd = "cp " + tpath + "main.dart main.dart";
        system((cmd).c_str());
    } else if (langNameStr == "fs" || langNameStr == "fsharp" || langNameStr == "f#") {
        std::string cmd = "cp " + tpath + "main.fs main.fs";
        system((cmd).c_str());
    } else if (langNameStr == "go" || langNameStr == "golang") {
        std::string cmd = "cp " + tpath + "main.go main.go";
        system((cmd).c_str());
    } else if (langNameStr == "h" || langNameStr == "header") {
        std::string cmd = "cp " + tpath + "main.h main.h";
        system((cmd).c_str());
    } else if (langNameStr == "html" || langNameStr == "html5") {
        std::string cmd = "cp " + tpath + "main.html main.html";
        system((cmd).c_str());
    } else if (langNameStr == "java") {
        std::string cmd = "cp " + tpath + "main.java main.java";
        system((cmd).c_str());
    } else if (langNameStr == "js" || langNameStr == "javascript") {
        std::string cmd = "cp " + tpath + "main.js main.js";
        system((cmd).c_str());
    } else if (langNameStr == "lua") {
        std::string cmd = "cp " + tpath + "main.lua main.lua";
        system((cmd).c_str());
    } else if (langNameStr == "objc" || langNameStr == "objectivec" || langNameStr == "m") {
        std::string cmd = "cp " + tpath + "main.m main.m";
        system((cmd).c_str());
    } else if (langNameStr == "md" || langNameStr == "markdown") {
        std::string cmd = "cp " + tpath + "main.md main.md";
        system((cmd).c_str());
    } else if (langNameStr == "php") {
        std::string cmd = "cp " + tpath + "main.php main.php";
        system((cmd).c_str());
    } else if (langNameStr == "pl" || langNameStr == "perl") {
        std::string cmd = "cp " + tpath + "main.pl main.pl";
        system((cmd).c_str());
    } else if (langNameStr == "ps1" || langNameStr == "powershell") {
        std::string cmd = "cp " + tpath + "main.ps1 main.ps1";
        system((cmd).c_str());
    } else if (langNameStr == "rb" || langNameStr == "ruby") {
        std::string cmd = "cp " + tpath + "main.rb main.rb";
        system((cmd).c_str());
    } else if (langNameStr == "rs" || langNameStr == "rust") {
        std::string cmd = "cp " + tpath + "main.rs main.rs";
        system((cmd).c_str());
    } else if (langNameStr == "sh" || langNameStr == "shell" || langNameStr == "bash") {
        std::string cmd = "cp " + tpath + "main.sh main.sh";
        system((cmd).c_str());
    } else if (langNameStr == "swift") {
        std::string cmd = "cp " + tpath + "main.swift main.swift";
        system((cmd).c_str());
    } else if (langNameStr == "fortran" || langNameStr == "f90") {
        std::string cmd = "cp " + tpath + "main.f90 main.f90";
        system((cmd).c_str());
    } else if (langNameStr == "kotlin" || langNameStr == "kt") {
        std::string cmd = "cp " + tpath + "main.kt main.kt";
        system((cmd).c_str());
    } else if (langNameStr == "typescript" || langNameStr == "ts") {
        std::string cmd = "cp " + tpath + "main.ts main.ts";
        system((cmd).c_str());
    } else if (langNameStr == "julia" || langNameStr == "jl") {
        std::string cmd = "cp " + tpath + "main.jl main.jl";
        system((cmd).c_str());
    } else if (langNameStr == "r") {
        std::string cmd = "cp " + tpath + "main.r main.r";
        system((cmd).c_str());
    } else if (langNameStr == "scala") {
        std::string cmd = "cp " + tpath + "main.scala main.scala";
        system((cmd).c_str());
    } else {
        std::cout << "Unknown language.\nSyntax: \nboiler *programming language name* -- generates boilerplate in current directory (programming language name must be lowercase)\nboiler *anything else* -- bring up this menu\nTip: You can use programming language file extensions instead of names for quicker use.\n";
        // tried to make this not a one-line command, didn't work for some reason
    }
}