/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:45 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 15:10:10 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	ClapTrap::_name = name + "_Clap_name";
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap Constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
	*this = other;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap()
{
	this->_name = "";
	ClapTrap::_name = _name + "_Clap_name";
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
	return ;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI()
{
 	std::cout << "my name is " << this->_name << " and my ClapTrap name is ";
	std::cout << ClapTrap::_name << std::endl;
	return ;
}
