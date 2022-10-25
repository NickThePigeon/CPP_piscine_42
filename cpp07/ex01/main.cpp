#include "iter.hpp"
#include <iostream>

template < typename T >
void	printElement(T &element) {
	std::cout << element << std::endl;
}

template < typename T >
void	addOne(T &element) { element += 1; }

int		main()
{
	char char_array[] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[] = {1, 2, 3, 4, 5};
	float float_array[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	std::cout << "char array ----------" << std::endl;
	::iter(char_array, 5, &printElement);
	std::cout << "add one -------------" << std::endl;
	::iter(char_array, 5, &addOne);
	::iter(char_array, 5, &printElement);
	std::cout << "int array ----------" << std::endl;
	::iter(int_array, 5, &printElement);
	std::cout << "add one -------------" << std::endl;
	::iter(int_array, 5, &addOne);
	::iter(int_array, 5, &printElement);
	std::cout << "float array ----------" << std::endl;
	::iter(float_array, 5, &printElement);
	std::cout << "add one -------------" << std::endl;
	::iter(float_array, 5, &addOne);
	::iter(float_array, 5, &printElement);
	return (0);
}