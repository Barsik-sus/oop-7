#pragma once
#include <iostream>
#include <string>
class pers
{
private:
	std::string name;
public:	
	void set_name(std::string new_name);
	void print_name();
	virtual void set_info(std::string specialty = "", int depart = 0, int x = 0) = 0;
	virtual void print_info() = 0;
};

