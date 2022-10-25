# include "Span.hpp"

Span::Span() : _length(0), _array(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(int n) : _array(std::vector<int>())
{
	if (n < 0)
		throw ArrayCanNotBeNegativeException();
	this->_length = n;
	std::cout << "Constructor called" << std::endl;
}
Span::Span(Span const &other)
{
	this->_length = other._length;
	std::copy(other._array.begin(), other._array.end(), std::back_inserter(_array));
	std::cout << "Copy constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

Span &Span::operator=(Span const &rhs)
{
	this->_length = rhs._length;
	std::copy(rhs._array.begin(), rhs._array.end(), std::back_inserter(_array));
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_array.size() >= this->_length)
		throw ArrayAlreadyFilledException();
	this->_array.push_back(num);
}

int		Span::longestSpan()
{
	int min;
	int max;

	if (this->_array.size() < 2)
		throw NoSpanCanBeMadeException();
	min = *std::min_element(this->_array.begin(), this->_array.end());
	max = *std::max_element(this->_array.begin(), this->_array.end());
	return (max - min);
}

int		Span::shortestSpan()
{
	std::vector<int>	copy_vec;
	int					distance;


	distance = -1;
	if (this->_array.size() < 2)
		throw NoSpanCanBeMadeException();
	distance = INT_MAX;
	copy_vec.assign(this->_array.begin(), this->_array.end());
	std::sort(copy_vec.begin(), copy_vec.end());
	for (int i = 1; i < copy_vec.size(); i++)
		if (copy_vec[i] - copy_vec[i - 1] < distance)
			distance = (copy_vec[i] - copy_vec[i - 1]);
	return (distance);
}

const char *Span::ArrayAlreadyFilledException::what() const throw()
{
	return ("No space left in array");
}

const char *Span::ArrayCanNotBeNegativeException::what() const throw()
{
	return ("Size of Array can't be less then zero");
}

const char *Span::NoSpanCanBeMadeException::what() const throw()
{
	return ("To calculate a span, the array has to be bigger then 1");
}

void	Span::printElements()
{
	std::vector<int>::iterator it;

	std::cout << "The elements in this array:" << std::endl;
	for (it = _array.begin(); it != _array.end(); it++)
	{
		std::cout << *it << "\n";
	}
	std::cout << "---------------------------"<< std::endl;
}
