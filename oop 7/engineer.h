#pragma once
#include "pers.h"
class engineer :
	public pers
{
	int quality;		  //������������
	int subdivision;      //����� �������������
public:
	engineer(int quality, int subdivision);
	void set_quality(int quality);
	void set_subdivision(int subdivision);
	void print_info();
};

