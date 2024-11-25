#include "template.hpp"

void aaa(std::string& c)
{
	c = "aaa";
}

template <typename T1>
void test(T1& a)
{
	std::cout << "test" << std::endl;
	a = "aaaaaaaaaaaaa";
	// std::cout << a << std::endl;
}

template <typename T1>
void test(const T1& a)
{
	std::cout << "const" << " test" << std::endl;
	std::cout << a << std::endl;
}

template <typename T1>
void test1(const T1& a)
{
	std::cout << "const" << " test" << std::endl;
	std::cout << a << std::endl;
}

template <typename T1>
void test1(T1& a)
{
	std::cout << "test1" << std::endl;
	// std::cout << a << std::endl;
	a += 1;
}

int main()
{
	// std::string str = "abcdefg";
	// ft::iter(str, str.length(), aaa);
	int array[3] = {0, 1, 2};
	ft::iter(array, 3, test1);
	for (int i = 0; i < 3; i++) {
		std::cout << i << " " << array[i] << std::endl;
	}
}