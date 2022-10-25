/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 18:01:34 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/08 18:01:37 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->club.getType() << std::endl;
	return ;
}

HumanA::HumanA(std::string const name, Weapon &club): name(name), club(club)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}
