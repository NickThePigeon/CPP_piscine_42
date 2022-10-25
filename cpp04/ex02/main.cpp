/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:29 by nicky         #+#    #+#                 */
/*   Updated: 2022/10/03 12:08:28 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() 
{
	const AAnimal* j = new Cat(); 
	const AAnimal* k = new Dog();
	/* try AAnimal to instantiate the base class to see it's abstract */
	// const AAnimal* x = new AAnimal();

	j->makeSound();
	k->makeSound();
	std::cout << "J is a " << j->getType() << " type of the Animal base class" << std::endl;
	std::cout << "K is a " << k->getType() << " type of the Animal base class" << std::endl;
	
	delete j;
	delete k;
	// delete x;

	return (0);
}
