/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:20:28 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/25 15:21:10 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
	return ;
}

AMateria::~AMateria()
{
	return ;
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}
