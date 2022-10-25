#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>

class Span
{
	private:
		unsigned int 		_length;
		std::vector<int> 	_array;

	public:
		Span();
		Span(int const n);
		Span(Span const &other);
		~Span();
		Span &operator=(Span const &rhs);

		int		shortestSpan();
		int		longestSpan();
		void	printElements();
		void	addNumber(int num);
	
		template <typename Iterator>
		void	addNumbersInRange(Iterator begin, Iterator end);

		class ArrayAlreadyFilledException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class ArrayCanNotBeNegativeException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class NoSpanCanBeMadeException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

template <typename Iterator >
void	Span::addNumbersInRange(Iterator begin, Iterator end)
{
	std::vector<int> tmp(begin, end);
	std::vector<int>::iterator it;

	int size = tmp.size();
	if ((this->_length - this->_array.size()) < size)
		throw ArrayAlreadyFilledException();
	for (it = tmp.begin(); it != tmp.end(); it++)
		this->_array.push_back(*it);
}

#endif /* SPAN_HPP */