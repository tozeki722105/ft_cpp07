#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

namespace ft
{
template <typename T, typename T2>
void iter(T *array, size_t length, void (*func)(T &))
{
	if (!array || !func)
		return;
	for (size_t i = 0; i < length; i++) {
		func(array[i]);
	}
}
// template <typename T>
// void iter(const T *array, size_t length, void (*func)(const T &))
// {
// 	std::cout << "gnnalgnalnganganlalngalnl\n";
// 	if (!array || !func)
// 		return;
// 	for (size_t i = 0; i < length; i++) {
// 		func(array[i]);
// 	}
// }
}  // namespace ft

// namespace test
// {
// template <typename T>
// T &addRef(T &target, int addNum)
// {
// 	target += addNum;
// 	return (target);
// }
// template <typename T>
// void aaa(std::string &c)
// {
// 	c = "kkkkkk";
// }
// }  // namespace test

#endif