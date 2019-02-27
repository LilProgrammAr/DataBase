#pragma once
#ifndef CLASS_SERIAIZABLE_H
#define CLASS_SERIAIZABLE_H

#include <string>

class Serializable {
public:
	virtual std::string serialize() = 0;
	virtual void deserialize(std::string) = 0;
};

#endif //CLASS_SERIAIZABLE_H
