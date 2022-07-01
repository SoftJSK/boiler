#include <cstdio>
#include <iostream>
#include "generate.h"
#include "main.h"

int main(int argc, char *argv[]) {
    langName = argv[1]; // boiler = argv[0], argument = argv[1]
    if (argc == 2) {
        generate(langName); // generate.cpp
    } else {
        std::cout << "Unknown option.\nSyntax: \nboiler *programming language name* -- generates boilerplate in current directory (programming language name must be lowercase)\nboiler *anything else* -- bring up this menu\nTip: You can use programming language file extensions instead of names for quicker use.\n"; 
    }
    return 0;
}