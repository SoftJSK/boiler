#include <cstdio>
#include <iostream>
#include "generate.h"
#include "main.h"

int main(int argc, char *argv[]) {
    langName = argv[1];
    if (argc == 2) {
        generate(langName);
    } else {
        std::cout << "Unknown option.\n"; 
    }
    return 0;
}