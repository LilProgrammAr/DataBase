#pragma once 
#ifndef CLASS_PARSER_H
#define CLASS_PARSER_H

#include <iostream>
#include <sstream>
#include <fstream>

namespace std {
	string to_string(bool a) {
		ostringstream oss;
		oss << boolalpha << a;
		return oss.str();
	}
}

/*
Data in files is stored in the way :
-- single entry -- {#FIELD_NAME = "STRING_VALUE", #FIELD_NAME = NUMERIC_VALUE ...}

In this particular case we`ll store in base struct representing information about people:

struct Human {
	std::string Name;
	std::string Surname;
	std::string Pather;
	unsigned int Age;
	bool isMarried;
}
*/

template <typename SerializableType>
class Parser {



};

#endif //CLASS_PARSER_H