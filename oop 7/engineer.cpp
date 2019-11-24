#include "engineer.h"


void engineer::set_info(std::string, int new_quality, int new_subdivision)
{
	quality = new_quality;
	subdivision = new_subdivision;
}
void engineer::print_info()
{
	std::cout << "Quality: " << quality << std::endl
		<< "Subdivision: " << subdivision << std::endl;
}
