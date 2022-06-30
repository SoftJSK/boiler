#include "generate.h"
#include "main.h"
#include <iostream>
#include <string>

void generate(char *lang) {
    std::cout << lang;
    std::string cmd;
    std::string tpath = "~/.boiler/template/";
    std::string langNameStr = std::string(lang);
    if (langNameStr == "c") {
        std::cout << cmd << std::endl;
        std::string cmd = "cp " + tpath + "main.c main.c";
        system((cmd).c_str());
    } else if (langNameStr == "cpp") {
        system(("cp " + tpath + "main.cpp main.cpp").c_str());
    } else if (langNameStr == "python") {
        system(("cp " + tpath + "main.py main.py").c_str());  
    } else {
        std::cout << "Unknown language.\n";
    }
}