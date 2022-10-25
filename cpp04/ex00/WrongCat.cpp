/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:37 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 12:57:01 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(WrongCat const &other)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = other;
	return ;
}


WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &other)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wronnngggg Wronngggg cat" << std::endl;
	return ;
}
