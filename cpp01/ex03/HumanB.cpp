/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 18:00:43 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/08 18:01:51 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (!this->club->getType().empty())
	{
		std::cout << this->name << " attacks with their ";
		std::cout << this->club->getType() << std::endl;
	}
	else
		std::cout << this->name << " isn't armed with a weapon" << std::endl;
	return ;
}

HumanB::HumanB(std::string name)
{
	this->club = nullptr;
	this->name = name;
	return ;
}

void	HumanB::setWeapon(Weapon &club)
{
	 this->club = &club;
	 return;
}

Weapon&	HumanB::getWeapon(void)
{
	return (*(this->club));
}

HumanB::~HumanB()
{
	return ;
}
