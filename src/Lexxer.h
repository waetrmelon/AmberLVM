#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

#include "AmberUtils.h"

struct Token {
    std::string Type;
    std::string Value;
};

std::string Syntax[];
std::string Types[];

std::vector<Token> Tokenize(std::string FileName);