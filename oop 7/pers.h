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
	virtual void print_info() = 0;
};

