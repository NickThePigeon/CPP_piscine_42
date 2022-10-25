/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:33 by nicky         #+#    #+#                 */
/*   Updated: 2022/10/03 12:20:44 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:

		std::string type;
	
	public:

		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &other);

		virtual void makeSound(void) const;
		const	std::string &getType(void) const;
};

#endif /* WRONGANIMAL_HPP */
