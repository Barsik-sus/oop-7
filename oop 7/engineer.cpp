#include "engineer.h"


engineer::engineer(int new_quality, int new_subdivision)
{
	quality = new_quality;
	subdivision = new_subdivision;
}


void engineer::set_quality(int new_quality)
{
	quality = new_quality;
}


void engineer::set_subdivision(int new_subdivision)
{
	subdivision = new_subdivision;
}

void engineer::print_info()
{
	std::cout << "Quality: " << quality << std::endl
		<< "Subdivision: " << subdivision << std::endl;
}
