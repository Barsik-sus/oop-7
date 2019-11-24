#pragma once
#include "pers.h"
class worker :
	public pers
{
	std::string specialty; // название специальности
	int depart;			   // номер цеха
public:
	worker(std::string specialty, int depart);
	void set_specialty(std::string specialty);
	void set_depart(int depart);
	void print_info();
};

