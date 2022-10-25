/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:20:35 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/25 15:20:36 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _idx(0), _invent_count(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	return ;
}

Character::Character(Character const &other)
{
	*this = other;
	return ;
}

Character::~Character()
{
	for (int i = 0; i < (this->_invent_count - 1); i++)
		delete this->_inventory[i];
	return ;
}

Character &Character::operator=(Character const &rhs)
{
	if (this == &rhs)
	return (*this);
	this->_name = rhs._name;
	for (int i = 0; i < this->_invent_count; i++)
		delete this->_inventory[i];
	this->_invent_count = rhs._invent_count;
	for (int i = 0; i < rhs._invent_count; i++)
		this->equip(rhs._inventory[i]->clone());
	for (int i = this->_invent_count; i < 4; i++)
		this->_inventory[i] = nullptr;
	return (*this);
}

std::string const &Character::getName(void) const {
	return(this->_name);
}

void	Character::equip(AMateria* materia)
{
	if (this->_invent_count > 3)
		return ;
	this->_inventory[this->_invent_count] = materia;
	this->_invent_count++;
	return ;
}

void	Character::unequip(int idx)
{
	int i;

	if (this->_invent_count < 0 || idx > this->_invent_count)
		return ;
	for (i = idx; i < (this->_invent_count); i++)
		this->_inventory[i] = this->_inventory[i + 1];
	this->_inventory[i] = nullptr;
	this->_invent_count--;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > this->_invent_count || this->_inventory[idx] == nullptr)
		return ;
	this->_inventory[idx]->use(target);
	return ;
}