#include <iostream>
#include "pers.h"
#include "admin.h"
#include "worker.h"
#include "engineer.h"
using namespace std;

int main()
{
	pers * First = new admin();
	First->set_name("First");
	First->print_name();
	First->set_info("Boss");
	First->print_info();

	pers* Second = new worker();
	Second->set_name("Second");
	Second->print_name();
	Second->set_info("Some speciality", 5);
	Second->print_info();

	pers* Third = new engineer();
	Third->set_name("Third");
	Third->print_name();
	Third->set_info("",5,6);
	Third->print_info();

	delete Third;
	delete Second;
	delete First;
	return 0;
}