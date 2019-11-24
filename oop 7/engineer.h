#pragma once
#include "pers.h"
class engineer :
	public pers
{
	int quality;		  //квалификация
	int subdivision;      //номер подразделения
public:
	void set_info(std::string, int quality, int subdivision);
	void print_info();
};

