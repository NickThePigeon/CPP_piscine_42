/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:53:02 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/29 10:37:05 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : virtual public Animal
{
	private:

		Brain* brain;

	public:

		Cat();
		Cat(Cat const &other);
		virtual ~Cat();
		Cat &operator=(const Cat &other);
		void makeSound() const;
};

#endif /* CAT_HPP */
