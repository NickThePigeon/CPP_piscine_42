/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:14 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 14:58:41 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) 
{
	std::cout << "Constructor named " << this->_Name << " called" << std::endl;
	return ;
}

ClapTrap::ClapTrap() : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0), _Name("")
{
	std::cout << "Default ClapTrap Constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor named " << this->_Name <<  " called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	std::cout << "Copy constructor named " << this->_Name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		std::cout << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints -= 1;
	}
	else
		std::cout << "No energy points left to attack" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints -= amount;
	if (this->_HitPoints < 0)
		this->_HitPoints = 0;
	std::cout << this->_Name << " takes " << amount << " of damage, " << this->_HitPoints << " left" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0)
	{
		this->_HitPoints += amount;
		this->_EnergyPoints -= 1;
		std::cout << this->_Name << " get repaired by " << amount << " ,total Attack damage = " << this->_AttackDamage << std::endl;
	}
	else
		std::cout << "No energy points left to repair" << std::endl;
	return ;
}