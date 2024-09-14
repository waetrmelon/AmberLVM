#include <iostream>
#include <vector>
#include <sstream>
#include <string>

#include "Lexxer.h"
#include "Parser.h"

int main()
{
	std::vector<Token> Tokens = Tokenize("tests\\test.abc");
	std::vector<Node> AST = Parse(Tokens);
}
