#pragma once
#include "pers.h"
class engineer :
	public pers
{
	int quality;		  //квалификация
	int subdivision;      //номер подразделения
public:
	engineer(int quality, int subdivision);
	void set_quality(int quality);
	void set_subdivision(int subdivision);
	void print_info();
};

