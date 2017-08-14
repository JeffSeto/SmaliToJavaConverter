#ifndef _SMALI_SYMBOL_GENERATOR_
#define _SMALI_SYMBOL_GENERATOR_

#include <vector>
#include <string>
#include "SmaliTokenGenerator.h"

class SmaliSymbolGenerator {
	private:
		static SmaliSymbolGenerator instance;
		SmaliSymbolGenerator();
		
		Token* generateToken(std::string);

		std::string dotKeyword(std::string) const;
		void stateFunction(State* state, char v);
		
		enum State {empty}

		struct DFAState{
			int state;
			std::string lexeme;
			State() {
				state = 0;
				lexeme = "";
			}
		}

	public:
		struct Token{
			std::string lexeme;
			std::string type;
		};

		
		//Input operator
		void convert(std::istream& stream);

		//Returns Symbol Generator instance
		SmaliSymbolGenerator getInstance();

		//Disable unecessary operations/functions
		SmaliSymbolGenerator(const SmaliSymbolGenerator&) = delete;
 		SmaliSymbolGenerator& operator= (const SmaliSybolGenerator&) = delete; 
		
}

#endif
