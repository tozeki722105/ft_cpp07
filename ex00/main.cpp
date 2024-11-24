#include <iostream>

#include "template.hpp"

int main()
{
	{
		int a = 1;
		int b = 100;
		std::cout << "min: " << ft::min(a, b) << " max: " << ft::max(a, b) << std::endl;
		std::cout << "prev_swap a: " << a << std::endl;
		ft::swap(a, b);
		std::cout << "after_swap a: " << a << std::endl;
	}
	std::cout << std::endl;
	{
		std::string a = "abcde-f";
		std::string b = "abcde-z";
		std::cout << "min: " << ft::min(a, b) << " max: " << ft::max(a, b) << std::endl;
		std::cout << "prev_swap a: " << a << std::endl;
		ft::swap(a, b);
		std::cout << "after_swap a: " << a << std::endl;
	}
}