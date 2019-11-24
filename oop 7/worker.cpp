#include "worker.h"


worker::worker(std::string new_specialty, int new_depart)
{
	specialty = new_specialty;
	depart = new_depart;
}


void worker::set_specialty(std::string new_specialty)
{
	specialty = new_specialty;
}


void worker::set_depart(int new_depart)
{
	depart = new_depart;
}


void worker::print_info()
{
	std::cout << "Specialty: " << specialty << std::endl
		<< "Depart: " << depart << std::endl;
}