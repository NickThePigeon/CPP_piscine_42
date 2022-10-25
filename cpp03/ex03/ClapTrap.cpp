/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:14 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 15:11:49 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) 
{
	std::cout << "Constructor ClapTrap named " << this->_name << " called" << std::endl;
	return ;
}

ClapTrap::ClapTrap() : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0), _name("")
{
	std::cout << "Default ClapTrap Constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	this->_name = other._name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	std::cout << "Copy constructor named " << this->_name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
	this->_name = other._name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		std::cout << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
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
	std::cout << this->_name << " takes " << amount << " of damage, " << this->_HitPoints << " left" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0)
	{
		this->_HitPoints += amount;
		this->_EnergyPoints -= 1;
		std::cout << this->_name << " get repaired by " << amount << " ,total Attack damage = " << this->_AttackDamage << std::endl;
	}
	else
		std::cout << "No energy points left to repair" << std::endl;
	return ;
}