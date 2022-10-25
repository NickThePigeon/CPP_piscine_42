/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:53:02 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 12:24:04 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	private:

	public:

		Cat(Cat const &other);
		Cat();
		~Cat();
		Cat &operator=(const Cat &other);
		void makeSound() const;
};

#endif /* CAT_HPP */
