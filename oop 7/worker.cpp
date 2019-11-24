#include "worker.h"


void worker::set_info(std::string new_specialty, int new_depart, int)
{
	specialty = new_specialty;
	depart = new_depart;
}


void worker::print_info()
{
	std::cout << "Specialty: " << specialty << std::endl
		<< "Depart: " << depart << std::endl;
}