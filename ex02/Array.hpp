#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <ctime>
#include <stdexcept>

template <typename T>
class Array
{
private:
	T *_data;
	unsigned int _size;

public:
	Array();
	Array(unsigned int size);
	~Array();
	Array(const Array<T> &other);
	Array<T> &operator=(const Array<T> &other);

	T &operator[](unsigned int id);
	const T &operator[](unsigned int id) const;
	void checkIndex(unsigned int id) const;
	unsigned int size() const;
};

template <typename T>
Array<T>::Array() : _data(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int size) : _data(NULL), _size(size)
{
	if (_size != 0)
		_data = new T[_size];
}

template <typename T>
Array<T>::~Array()
{
	if (_data)
		delete[] _data;
}

template <typename T>
Array<T>::Array(const Array<T> &other) : _data(NULL)
{
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
	if (this == &other)
		return *this;

	if (_data)
		delete[] _data;
	_size = other.size();
	if (_size == 0) {
		_data = NULL;
		return *this;
	}
	_data = new T[_size];
	for (unsigned int i = 0; i < _size; i++) {
		_data[i] = other[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int id)
{
	checkIndex(id);
	return _data[id];
}

template <typename T>
const T &Array<T>::operator[](unsigned int id) const
{
	checkIndex(id);
	return _data[id];
}

template <typename T>
void Array<T>::checkIndex(unsigned int id) const
{
	if (id >= _size)
		throw std::out_of_range("Invalid Index");
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

#endif