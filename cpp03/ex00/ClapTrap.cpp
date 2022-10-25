/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:48:46 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 15:17:08 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) 
{
	std::cout << "constuctor named " << this->_Name << " called" << std::endl;
	return ;
}

ClapTrap::ClapTrap() : _Name(""), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) 
{
	std::cout << "default constuctor named " << this->_Name << " called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destuctor named " << this->_Name <<  " called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	std::cout << "constuctor named " << this->_Name << " called" << std::endl;
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
	this->_AttackDamage -= amount;
	if (this->_AttackDamage < 0)
		this->_AttackDamage = 0;
	std::cout << this->_Name << " takes " << amount << " of damage, " << this->_AttackDamage << " left" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints > 0)
	{
		this->_HitPoints += amount;
		this->_EnergyPoints -= 1;
		std::cout << this->_Name << " get repaired by " << amount << " ,total Hitpoints = " << this->_HitPoints << std::endl;
	}
	else
		std::cout << "No energy points left to repair" << std::endl;
	return ;
}
