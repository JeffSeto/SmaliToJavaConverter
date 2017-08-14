#include "SmaliSymbolGenerator"



Token* SmaliTokenGenerator::generateToken(std::string l){
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
	} else {
		std::string type = dotKeyword(l);
		if(type != "ERROR") {
			token->type = type;
			token->lexeme = l;
			return token;
		}

		type = generalKeyword(std::string l);
		if(type != "ERROR") {
			token->type = type;
			token->lexeme = l;
			return token;
		}
	}

	token->lexeme = l;
	return token;
}

std::string SmaliSymbolGenerator::generalKeyword(std::string l) {
	if(l == ".array-data"){
		return "ARRAY-DATA";
	} else if(l == ".catch"){
		return "CATCH";
	} else if(l == ".catchall"){
		return "CATCHALL";
	} else if(l == ".class"){
		return "CLASS";
	} else if(l == ".end"){
		return "END";
	} else if(l == ".enum"){
		return "ENUM";
	} else if(l == ".epilogue"){
		return "EPILOGUE";
	} else if(l == ".field"){
		return "FIELD";
	} else if(l == ".implements"){
		return "IMPLEMENTS";
	} else if(l == ".line"){
		return "LINE";
	} else if(l == ".local"){
		return "LOCAL";
	} else if(l == ".locals"){
		return "LOCALS";
	} else if(l == ".parameter"){
		return "PARAMETER";
	} else if(l == ".proglogue"){
		return "PROLOGUE";
	} else if(l == ".registers"){
		return "REGISTERS";
	} else if(l == ".restart"){
		return "RESTART";
	} else if(l == ".source"){
		return "SOURCE";
	} else if(l == ".subannotation"){
		return "SUBANNOTATION";
	} else {
		return "ERROR";
	}
}

std::string SmaliSymbolGenerator::generalKeyword(std::string l) {

}

//Return generator instance
SmaliSymbolGenerator SmaliSymbolGenerator::getInstance() {
	return instance;
}

//Private state function
void stateFunction(DFAState* state, char v) {
	
}

void SmaliSymbolGenerator::convert(std::istream& stream, const SmaliSymbolGenerator& generator) {
	std::string line;
	getline(stream, line);
	DFAState* state = NULL;
	while(line != NULL) {
		for(int i = 0; i < line.length(); i++) {
			char c = line[i];
			if(!state) {
				state = new State();
			}
			
		}
	}
}
