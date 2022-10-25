/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:07 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 15:05:59 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_Name = name;
	this->_AttackDamage = 20;
	this->_EnergyPoints = 50;
	this->_HitPoints = 100;
	std::cout << "ScaveTrap Constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
	this->_Name = other._Name;
	this->_AttackDamage = other._AttackDamage;
	this->_EnergyPoints = other._EnergyPoints;
	this->_HitPoints = other._HitPoints;
	std::cout << "ScaveTrap Copy Constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap()
{
	std::cout << "Default ScaveTrap Constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	this->_AttackDamage = 20;
	this->_EnergyPoints = 50;
	this->_HitPoints = 100;
	this->_Name = "";
	std::cout << "Destructor ScaveTrap called" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap &other)
{
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << this->_Name << " a instance of ScaveTrap, is now in gate"
	"keeping mode" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		std::cout << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage 
			<< " points of damage!,FYI this is in the ScaveTrap" << std::endl;
		this->_EnergyPoints -= 1;
	}
	else
		std::cout << "No energy points left to attack" << std::endl;
	return ;
}