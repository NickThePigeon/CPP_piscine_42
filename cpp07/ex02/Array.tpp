#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"
#ifndef ARRAY_HPP
#error __FILE__ should only be included from ARRAY.hpp.
#endif /* ARRAY_HPP */

template < typename T>
Array<T>::Array()
{
	_array = new T[0];
	_size = 0;
};

template < typename T>
Array<T>::Array(unsigned int n) {
	this->_array = nullptr;
	if (n > INT_MAX)
	{
		std::cout << "argument can't be negative" << std::endl;
		return ;
	}
	T*	init = new T();

	this->_size = n;
	this->_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		this->_array[i] = *init;
	delete init;
};

template < typename T>
Array<T>::Array(Array<T> const &other) {
	_array = nullptr;
	operator=(other);
};

template < typename T>
Array<T>::~Array()
{
	if (_size > 0)
		delete [] _array;
};

template < typename T>
Array<T> 	&Array<T>::operator=( const Array<T> &rhs )
{
	this->_size = rhs.size();
	this->_array = new T[_size];
	for (size_t i = 0; i < _size; i++)
		this->_array[i] = rhs._array[i];
	return (*this);
}

template < typename T>
T	&Array<T>::operator[](int const index) const
{ 

	if (index >= this->_size) { 
		throw Array::IndexOutOfBounceException(); 
	} 
	return (this->_array[index]); 
}

template < typename T>
int const	Array<T>::size() const
{
	return (this->_size);
}

template < typename T>
const char *Array<T>::IndexOutOfBounceException::what() const throw()
{
	return ("Given index out of range");
}

#endif /* ARRAY_HPP */
