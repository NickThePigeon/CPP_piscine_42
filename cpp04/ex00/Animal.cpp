/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:45 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/29 10:40:40 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const Animal &other)
{
	this->type = other.type;
	std::cout << "Copy Animal constructor called" << std::endl;
	return ;
}

Animal::Animal()
{
	this->type = "";
	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal constructor called" << std::endl;
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
