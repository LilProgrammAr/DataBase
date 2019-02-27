#pragma once
#ifndef CLASS_HUMAN_H
#define CLASS_HUMAN_H

#include "Serializable/Serializable.hpp"

class Human: public Serializable{
	std::string name;
	std::string surname;
	std::string pather;
	unsigned int age;
	
public: 
	Human() = default;
	~Human() = default;

	Human(const Human&) = default;

	std::string getName();
	void setName(std::string);

	std::string getSurname();
	void setSurname(std::string);

	std::string getPathers();
	void setPathers(std::string);

	unsigned int getAge();
	void setAge(unsigned int);

	std::string serialize() override();
	void deserialize(std::string) override;
}


#endif //CLASS_HUMAN_Hf