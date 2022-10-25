#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <list>
# include <set>
# include <deque>
# include <vector>
# include <algorithm>
# include <iterator>
# include <iostream>

template <typename T>
int		easyfind(T &t, int const needle)
{
	int i;

	i = 0;
	for (typename T::iterator it = t.begin(); it != t.end(); ++it) {
		if (*it == needle) {
			std::cout << "Needle found at index: " << i << std::endl;
			return (i);
		}
		i++;
	}
	std::cout << "Needle not in container" << std::endl;
	return (-1);
}

# endif /* EASYFIND_HPP */
