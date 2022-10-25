/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:20 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 15:06:53 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_Name = name;
	this->_AttackDamage = 30;
	this->_EnergyPoints = 100;
	this->_HitPoints = 100;
	std::cout << "FragTrap Constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap &other)
{
	this->_Name = other._Name;
	this->_AttackDamage = other._AttackDamage;
	this->_EnergyPoints = other._EnergyPoints;
	this->_HitPoints = other._HitPoints;
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap()
{
	this->_Name = "";
	this->_AttackDamage = 30;
	this->_EnergyPoints = 100;
	this->_HitPoints = 100;
	std::cout << "FragTrap Default Constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap &other)
{
	this->_Name = other._Name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "YEAH, Give me a high five!" << std::endl;
	return ;
}
