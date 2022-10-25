/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:20:31 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/29 10:45:00 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	private:

		AMateria();

	protected:

		std::string	_type;

	public:

		AMateria(std::string const &type);
		AMateria(const AMateria &other);
		virtual ~AMateria() = 0;
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);

};

#endif /* AMATERIA_HPP */