#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

namespace ft
{
template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
template <typename T>
T max(const T &a, const T &b)
{
	return (a >= b) ? a : b;
}
template <typename T>
T min(const T &a, const T &b)
{
	return (a < b) ? a : b;
}
}  // namespace ft

#endif