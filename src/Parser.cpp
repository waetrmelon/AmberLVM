
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

	void AdvanceToken() {
		TokenIndex++;
		if (TokenIndex < Tokens.size()) {
			CurrentToken = Tokens[TokenIndex];
		}
	}


	std::vector<Node> ParseTokens() {
		std::vector<Node> Nodes;
		AdvanceToken();
		while (TokenIndex < Tokens.size()) {
			std::cout << CurrentToken.Type << "\n";
			AdvanceToken();
		}
		
		return Nodes;
	}
	
};

std::vector<Node> Parse(std::vector<Token> recvTokens) {
	
	Parser parserInstance;
	parserInstance.Tokens = recvTokens;
	return parserInstance.ParseTokens();

}