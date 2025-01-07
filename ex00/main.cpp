#include <iostream>

#include "whatever.hpp"

int main()
{
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	std::cout << std::endl;

	{
		int a = 1;
		int b = 100;
		std::cout << "min: " << ::min(a, b) << " max: " << ::max(a, b) << std::endl;
		std::cout << "prev_swap a: " << a << std::endl;
		::swap(a, b);
		std::cout << "after_swap a: " << a << std::endl;
	}
	std::cout << std::endl;

	{
		std::string a = "abcde-f";
		std::string b = "abcde-z";
		std::cout << "min: " << ::min(a, b) << " max: " << ::max(a, b) << std::endl;
		std::cout << "prev_swap a: " << a << std::endl;
		::swap(a, b);
		std::cout << "after_swap a: " << a << std::endl;
	}
}