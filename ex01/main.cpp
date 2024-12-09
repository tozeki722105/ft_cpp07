#include "template.hpp"

namespace test
{
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
}  // namespace test

int main()
{
	{
		int array[3] = {0, 1, 2};
		ft::iter(array, 3, test::add32);
		for (size_t i = 0; i < 3; i++) {
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
	std::cout << std::endl;
	{
		std::string strings[2] = {"ABCDEFG", "HIJKLMN"};
		ft::iter(strings, 2, test::add32);
		for (size_t i = 0; i < 2; i++) {
			std::cout << i << " " << strings[i] << std::endl;
		}
	}
	std::cout << std::endl;
	{
		const std::string strings[2] = {"ABCDEFG", "HIJKLMN"};
		ft::iter(strings, 2, test::print);
	}
}