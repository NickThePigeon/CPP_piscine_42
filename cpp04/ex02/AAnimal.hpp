/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:33 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 13:16:29 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:

		std::string type;
	
	public:

		AAnimal(const AAnimal &other);
		AAnimal();
		virtual ~AAnimal() = 0;
		AAnimal &operator=(const AAnimal &other);


		virtual void makeSound(void) const;
		const	std::string &getType(void) const;
};

#endif /* AANIMAL_HPP */
