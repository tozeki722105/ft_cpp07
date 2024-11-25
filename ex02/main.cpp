#include <iostream>

#include "Array.hpp"

int main()
{
	{
		unsigned int size = 10;
		Array<int> iArray(size);
		iArray[0] = 100;
		iArray[2] = 100;
		for (unsigned int i = 0; i < size; i++) {
			std::cout << iArray[i] << std::endl;
		}
	}

	system("leaks -q a.out");
}