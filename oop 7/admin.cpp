#include "admin.h"


admin::admin(std::string new_post)
{
	post = new_post;
}


void admin::set_post(std::string new_post)
{
	post = new_post;
}


void admin::print_info()
{
	std::cout << "Post:" << post << std::endl;
}