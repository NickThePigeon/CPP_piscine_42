/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:40 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 12:57:31 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	private:

	public:

		WrongCat();
		WrongCat(WrongCat const &other);
		~WrongCat();
		WrongCat	&operator=(WrongCat const &other);
		virtual void makeSound() const;
};

#endif /* WRONGCAT_HPP */
