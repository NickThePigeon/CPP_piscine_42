/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:20:55 by nicky         #+#    #+#                 */
/*   Updated: 2022/10/03 12:00:07 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice(Ice const &other);
		virtual ~Ice();

		Ice	&operator=(Ice const &rhs);
		AMateria*	clone() const;
		void use(ICharacter &target);
};

#endif /* ICE_HPP */
