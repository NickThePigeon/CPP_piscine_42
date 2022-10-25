/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:33 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 13:08:34 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:

		std::string type;
	
	public:

		Animal(const Animal &other);
		Animal();
		virtual ~Animal();
		Animal &operator=(const Animal &other);

		virtual void makeSound(void) const;
		const	std::string &getType(void) const;
};

#endif /* ANIMAL_HPP */
