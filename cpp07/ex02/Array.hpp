#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:

		T*				_array;
		int				_size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &other);
		~Array();

		Array<T> 	&operator=( const Array<T> &rhs );
		T			&operator[](int const index) const;

		int const 	size() const;

		class IndexOutOfBounceException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"

#endif /* ARRAY_HPP */
