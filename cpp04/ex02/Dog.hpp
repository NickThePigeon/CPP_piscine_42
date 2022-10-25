/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:53 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/29 10:36:05 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : virtual public AAnimal
{
	private:

		Brain* brain;

	public:

		Dog(Dog const &other);
		Dog();
		virtual ~Dog();
		Dog &operator=(const Dog &other);
		void makeSound(void) const;

};

#endif /* DOG_HPP */
