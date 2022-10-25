/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:20:45 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/29 10:33:50 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(Cure const &other);
		virtual ~Cure();
	
		Cure	&operator=(Cure const	&rhs);
		AMateria* clone() const;
		void use(ICharacter &target);
};

#endif /* CURE_HPP */
