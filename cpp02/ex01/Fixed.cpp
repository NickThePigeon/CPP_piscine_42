/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:16:42 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/22 14:33:23 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructor

Fixed::Fixed(int const Value)
{
	std::cout << "int constructor called" << std::endl;
	this->value = (Value << Fixed::FracBits);
	return ;
}

//Second Constructor

Fixed::Fixed(float const Value)
{
	std::cout << "float constructor called" << std::endl;
	this->value = (roundf(Value * (1 << Fixed::FracBits)));
	return ;
}

//third Constructor Void

Fixed::Fixed(void)
{
	this->value = 0;
	std::cout << "default constructor called" << std::endl;
	return ;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
	return ;
}

// Copy Constructor
Fixed::Fixed(Fixed const &other)
{
	std::cout << "copy constructor called" << std::endl;
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

std::ostream& operator<<(std::ostream &out, Fixed const &value)
{
	
	out << value.toFloat();
	return (out);
}

Fixed	&Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::FracBits));
}

int		Fixed::toInt(void) const
{
	return (this->value >> Fixed::FracBits);
}
