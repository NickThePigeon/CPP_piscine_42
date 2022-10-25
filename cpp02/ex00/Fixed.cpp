/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 12:52:34 by nduijf        #+#    #+#                 */
/*   Updated: 2022/04/22 14:17:30 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructor
Fixed::Fixed() : Value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(Fixed &other)
{
	std::cout << "copy constructor called" << std::endl;
	this->Value = other.getRawBits();
	return ;
}

//Copy Assigment operator
Fixed& Fixed::operator=(Fixed &other)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->Value = other.getRawBits();
	return (*this);
}

// Return var Value of class Fixed
int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->Value);
}

// Set var Value of Class Fixed
void	Fixed::setRawBits(int const raw)
{
	this->Value = raw;
	return ;
}
