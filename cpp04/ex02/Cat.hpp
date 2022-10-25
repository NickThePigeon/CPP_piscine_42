/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:53:02 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/29 10:35:57 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : virtual public AAnimal
{
	private:

		Brain* brain;

	public:

		Cat(Cat const &other);
		Cat();
		virtual ~Cat();
		Cat &operator=(const Cat &other);
		void makeSound() const;
};

#endif /* CAT_HPP */
