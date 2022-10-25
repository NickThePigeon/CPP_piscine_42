/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 17:57:01 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 12:55:10 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const &other)
{
	std::cout << "Copy dog constructor called" << std::endl;
	*this = other;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wuff, Wuff" << std::endl;
	return ;
}
