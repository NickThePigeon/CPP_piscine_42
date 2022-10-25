/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:40 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 13:48:49 by nduijf        ########   odam.nl         */
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

		WrongCat(WrongCat const &other);
		WrongCat();
		~WrongCat();

		WrongCat &operator=(const WrongCat &other);
		void makeSound() const;
};

#endif /* WRONGCAT_HPP */