/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:45 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 13:16:01 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(const AAnimal &other)
{
	this->type = other.type;
	std::cout << "Copy AAnimal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal()
{
	this->type = "";
	std::cout << "Default AAnimal constructor called" << std::endl;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
	return ;
}

AAnimal	&AAnimal::operator=(AAnimal const &other)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

const	std::string		&AAnimal::getType() const
{
	return (this->type);
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal sound!, AAnimal sound!" << std::endl;
	return ;
}
