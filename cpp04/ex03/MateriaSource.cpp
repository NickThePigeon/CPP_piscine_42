/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:24:06 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/25 15:26:52 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _source_count(0)
{
	for (int i = 0; i < this->_source_count; i++)
		this->_sources[i] = nullptr;
	return ;
}

MateriaSource::MateriaSource(AMateria &other)
{
	*this = other;
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_source_count; i++)
		delete this->_sources[i];
	return ;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < this->_source_count; i++)
		delete this->_sources[i];
	this->_source_count = 0;
	for (int i = 0; i < rhs._source_count; i++)
		this->learnMateria(rhs._sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_sources[i] = nullptr;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (materia == nullptr || this->_source_count > 3)
		return ;
	this->_sources[this->_source_count] = materia;
	this->_source_count++;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_source_count; i++)
	{
		if (this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	}
	return (nullptr);
}
