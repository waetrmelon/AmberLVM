
#include <iostream>
#include <vector>

#include "Lexxer.h"

struct Node {
	std::string Type;
	std::string Value;
};

struct Parser {
	int TokenIndex = -1;
	std::vector<Token> Tokens;
	Token CurrentToken;

	void AdvanceToken();
	std::vector<Node> ParseTokens();

};

std::vector<Node> Parse(std::vector<Token> recvTokens);