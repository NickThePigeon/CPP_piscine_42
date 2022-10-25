/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:37 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 12:55:37 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(Cat const &other)
{
	std::cout << "Copy cat constructor called" << std::endl;
	*this = other;
	return ;
}


Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meoowww, Meoowww" << std::endl;
	return ;
}
