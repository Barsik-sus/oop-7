#pragma once
#include "pers.h"
class worker :
	public pers
{
	std::string specialty; // название специальности
	int depart;			   // номер цеха
public:
	void set_info(std::string new_specialty, int new_depart, int);
	void print_info();
};

