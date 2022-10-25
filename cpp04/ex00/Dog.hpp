/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:53 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 12:29:05 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	private:

	public:

		Dog(Dog const &other);
		Dog();
		~Dog();
		Dog &operator=(const Dog &other);
		virtual void makeSound(void) const;

};

#endif /* DOG_HPP */
