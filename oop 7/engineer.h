#pragma once
#include "pers.h"
class engineer :
	public pers
{
	int quality;		  //������������
	int subdivision;      //����� �������������
public:
	void set_info(std::string, int quality, int subdivision);
	void print_info();
};

