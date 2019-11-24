#include "admin.h"


void admin::set_info(std::string new_post, int , int)
{
	post = new_post;
}


void admin::print_info()
{
	std::cout << "Post:" << post << std::endl;
}