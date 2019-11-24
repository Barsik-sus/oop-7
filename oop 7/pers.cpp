#include "pers.h"


void pers::set_name(std::string new_name)
{
	name = new_name;
}


void pers::print_name()
{
	std::cout << "Name: " << name << std::endl;
}
