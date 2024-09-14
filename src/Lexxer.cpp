#include <iostream>
#include <vector>
#include <sstream>
#include <string>

#include "AmberUtils.h"

struct Token {
    std::string Type;
    std::string Value;
};

std::string Syntax[] = { "load", "jmp", "cmp", "je", "jne", "jg", "jne", "jg", "jl", "jge", "jle", "start", "end"};
std::string Types[] = { "int32", "str" };

std::vector<Token> Tokenize(std::string FileName) {

    std::vector<std::string> FileContents = GrabContents(FileName);
    std::vector<Token> Tokens;

    for (std::string Line : FileContents) {

        std::string word;
        std::istringstream iss(Line);

        while (std::getline(iss, word, ' ')) {

            if (std::count(begin(Syntax), end(Syntax), word)) {
                Token SyntaxToken = {"SYNTAX", word};
                Tokens.push_back(SyntaxToken);
            }
            else if (std::count(begin(Types), end(Types), word)) {
                Token TypeToken = { "TYPE", word };
                Tokens.push_back(TypeToken);
            }
            else if (word[0] == '$') {
                Token RegisterToken = { "REGISTER", word };
                Tokens.push_back(RegisterToken);
            }
            else {
                Token MiscToken = { "MISC", word };
                Tokens.push_back(MiscToken);
            }

        }
    }

    return Tokens;
}