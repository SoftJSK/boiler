#include "generate.h"
#include "main.h"
#include <iostream>
#include <string>

void generate(char *lang) {
    std::string tpath = "~/.boiler/template/";
    std::string langNameStr = std::string(langName);
    if (langNameStr == "c") {
        system(("cp " + tpath + "main.c main.c").c_str());
    } else if (langNameStr == "cpp") {
        system(("cp " + tpath + "main.cpp main.cpp").c_str());
    } else if (langNameStr == "python") {
        system(("cp " + tpath + "main.py main.py").c_str());  
    } else {
        std::cout << "Unknown language.";
    }
}