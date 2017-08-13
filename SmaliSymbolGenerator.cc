#include "SmaliSymbolGenerator"

Token* SmaliSymbolGenerator::generateToken(std::string l){
	Token *token = new Token;
	if(l == "("){
		token->type = "LPAREN";
	} else if(l == ")"){
		token->type = "RPAREN";
	} else if(l == "{"){
		token->type = "LBRACE";
	} else if(l == "}"){
		token->type = "RBRACE";
	} else if(l == "return"){
		token->type = "RETURN";
	} else if(l == "if"){
		token->type = "IF";
	} else if(l == "else"){
		token->type = "ELSE";
	} else if(l == "while"){
		token->type = "WHILE";
	} else if(l == "println"){
		token->type = "PRINTLN";
	} else if(l == "wain"){
		token->type = "WAIN";
	} else if(l == "="){
		token->type = "BECOMES";
	} else if(l == "int"){
		token->type = "INT";
	} else if(l == "=="){
		token->type = "EQ";
	} else if(l == "!="){
		token->type = "NE";
	} else if(l == "<"){
		token->type = "LT";
	} else if(l == ">"){
		token->type = "GT";
	} else if(l == "<="){
		token->type = "LE";
	} else if(l == ">="){
		token->type = "GE";
	} else if(l == "+"){
		token->type = "PLUS";
	} else if(l == "-"){
		token->type = "MINUS";
	} else if(l == "*"){
		token->type = "STAR";
	} else if(l == "/"){
		token->type = "SLASH";
	} else if(l == "%"){
		token->type = "PCT";
	} else if(l == ","){
		token->type = "COMMA";
	} else if(l == ";"){
		token->type = "SEMI";
	} else if(l == "new"){
		token->type = "NEW";
	} else if(l == "delete"){
		token->type = "DELETE";
	} else if(l == "["){
		token->type = "LBRACK";
	} else if(l == "]"){
		token->type = "RBRACK";
	} else if(l == "&"){
		token->type = "AMP";
	} else if(l == "NULL"){
		token->type = "NULL";
	} else {
		token->type = "ERR";
	}
	token->lexeme = l;
	return token;
}

SmaliSymbolGenerator SmaliSymbolGenerator::getInstance() {
	return instance;
}
