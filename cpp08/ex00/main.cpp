#include "easyfind.hpp"

template < typename T>
void	printelements(T &element)
{
	std::cout << element << std::endl;
}

int		main(void)
{
	std::vector<int> lst1;
	std::list<int> lst2;
	std::deque<int> lst3;


	lst1.push_back(12);
	lst1.push_back(3);
	lst1.push_back(34);
	lst1.push_back(42);
	lst1.push_back(57);

	::easyfind(lst1, 3);

	lst2.push_back(16);
	lst2.push_back(2);
	lst2.push_back(33);
	lst2.push_back(42);
	lst2.push_back(8);

	::easyfind(lst2, 4);

	lst3.push_back(52);
	lst3.push_back(22);
	lst3.push_back(2);
	lst3.push_back(98);
	lst3.push_back(17);

	::easyfind(lst3, 98);
	return (0);
}