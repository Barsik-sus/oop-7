#pragma once
#include "pers.h"
class admin :
	public pers
{
private:
	std::string post; // должность
public:
	admin(std::string post);
	void set_post(std::string post);
	void print_info();
};

