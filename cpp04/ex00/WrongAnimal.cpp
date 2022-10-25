/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:45 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 12:56:03 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal()
{
	this->type = "";
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

const	std::string		&WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound!, WrongAnimal sound!" << std::endl;
	return ;
}