#pragma once
#include "pers.h"
class admin :
	public pers
{
private:
	std::string post; // ���������
public:
	void set_info(std::string post, int, int);
	void print_info();
};

