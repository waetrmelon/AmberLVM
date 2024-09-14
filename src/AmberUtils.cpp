#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> GrabContents(std::string file_name) {
    std::ifstream file(file_name);
    std::string line;
    std::vector<std::string> lines;
    while (std::getline(file, line)) { lines.push_back(line); }
    return lines;
}


void ThrowState(std::string state) {
    std::cout << "\033[1;34mstate\033[0m" << "\033[1;37m: " << state << "\n";
}

void ThrowSTDError(std::string reason) {
    std::cout << "\033[1;31mwarning\033[0m" << "\033[1;37m: " << reason << "\n";
}

void ThrowLangError(std::string reason, int line) {
    std::cout << "\033[1;31merror\033[0m" << "\033[1;37m: " << reason << " -> \033[35mline:" << "\033[37m " << line << "\n";
}

void ThrowWarning(std::string reason) {
    std::cout << "\033[1;33mwarning\033[0m" << "\033[1;37m: " << reason << "\n";
}