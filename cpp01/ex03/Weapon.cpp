/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:12:43 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/16 15:12:44 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	const	Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string const type)
{
	this->_type = type;
	return ;
}

Weapon::Weapon(std::string const weapon)
{
	this->_type = weapon;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}
