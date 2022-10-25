#include "Fixed.hpp"

//Constructor

Fixed::Fixed(int const Value)
{
	// std::cout << "int constructor called" << std::endl;
	this->value = (Value << Fixed::FracBits);
	return ;
}

//Second Constructor

Fixed::Fixed(float const Value)
{
	// std::cout << "float constructor called" << std::endl;
	this->value = (roundf(Value * (1 << Fixed::FracBits)));
	return ;
}

//third Constructor Void

Fixed::Fixed(void) : value(0)
{
	// this->value = 0;
	// std::cout << "default constructor called" << std::endl;
	return ;
}

// Destructor
Fixed::~Fixed()
{
	// std::cout << "destructor called" << std::endl;
	return ;
}

// Copy Constructor
Fixed::Fixed(Fixed const &other)
{
	// std::cout << "copy constructor called" << std::endl;
	this->value = other.getRawBits();
	return ;
}

// Return var Value of class Fixed
int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

// Set var Value of Class Fixed
void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
	return ;
}

std::ostream& operator<<(std::ostream &out, Fixed const &other)
{
	out << other.toFloat();
	return (out);
}

Fixed	&Fixed::operator=(Fixed const &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

Fixed	Fixed::operator*(Fixed const &other)
{
	Fixed ret(*this);

	int temp1;
	int temp2;

	temp1 = this->getRawBits();
	temp2 = other.getRawBits();
	ret.setRawBits((temp1 * temp2)  / (1 << this->FracBits));
	// std::cout << "Copy assignment operator * called" << std::endl;
	return (ret);

}

Fixed	Fixed::operator/(Fixed const &other)
{
	Fixed ret(*this);

	int temp1;
	int temp2;

	temp1 = this->getRawBits();
	temp2 = other.getRawBits();
	ret.setRawBits((temp1 * (1 << FracBits) / temp2));
	// std::cout << "Copy assignment operator * called" << std::endl;
	return (ret);

}

Fixed	Fixed::operator+(Fixed const &other)
{
	Fixed ret(*this);

	ret.setRawBits(this->getRawBits() + other.getRawBits());;
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &other)
{
	Fixed ret(*this);

	ret.setRawBits(this->getRawBits() - other.getRawBits());;
	return (ret);
}

bool	Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}


Fixed	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	operator++();
	return (temp);
}

Fixed	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	operator--();
	return (temp);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::FracBits));
}

int		Fixed::toInt(void) const
{
	return (this->value >> Fixed::FracBits);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}
Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}
