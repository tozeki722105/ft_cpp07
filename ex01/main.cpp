#include "template.hpp"

namespace test
{
template <typename T>
void add32(T &val)
{
	val += 32;
}
}  // namespace test

int main()
{
	{
		size_t size = 3;
		int array[3] = {0, 1, 2};
		ft::iter(array, size, test::add32);
		for (size_t i = 0; i < size; i++) {
			std::cout << i << ": " << array[i] << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::string str = "ABCDEFG";
		ft::iter(&str[0], str.length(), test::add32);
		for (size_t i = 0; i < str.length(); i++) {
			std::cout << i << " " << str[i] << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::string str = "ABCDEFG";
		ft::iter<char>(&str[0], str.length(), NULL);
		for (size_t i = 0; i < str.length(); i++) {
			std::cout << i << " " << str[i] << std::endl;
		}
	}
}