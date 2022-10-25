/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:45 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 13:00:13 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Copy Animal constructor called" << std::endl;
	return ;
}

Animal::Animal()
{
	this->type = "";
	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &other)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

const	std::string		&Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound!, Animal sound!" << std::endl;
	return ;
}
