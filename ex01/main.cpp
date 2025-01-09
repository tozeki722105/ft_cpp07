#include <iostream>
#include <cstring>

#include "iter.hpp"


// test func
template <typename T>
void add32(T &val)
{
	val += 32;
}
template <>
void add32<std::string>(std::string &val)
{
	val += "32";
}
template <typename T>
void print(const T &val)
{
	std::cout << val << std::endl;
}

int main()
{
	{
		int array[3] = {0, 1, 2};
		::iter(array, 3, ::add32);
		for (size_t i = 0; i < 3; i++) {
			std::cout << i << ": " << array[i] << std::endl;
		}
	}
	std::cout << std::endl;
	{
		char str[] = "ABCDEFG";
		::iter(str, strlen(str), ::add32);
		for (size_t i = 0; i < strlen(str); i++) {
			std::cout << i << " " << str[i] << std::endl;
		}
	}
	std::cout << std::endl;
	{
		char str[] = "ABCDEFG";
		::iter<char>(str, strlen(str), NULL);  // NULL入れるため型宣言
		for (size_t i = 0; i < strlen(str); i++) {
			std::cout << i << " " << str[i] << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::string strings[2] = {"ABCDEFG", "HIJKLMN"};
		::iter(strings, 2, ::add32);
		for (size_t i = 0; i < 2; i++) {
			std::cout << i << " " << strings[i] << std::endl;
		}
	}
	std::cout << std::endl;
	{
		const std::string strings[2] = {"ABCDEFG", "HIJKLMN"};
		::iter(strings, 2, ::print);
	}
}