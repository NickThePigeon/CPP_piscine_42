/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:29 by nicky         #+#    #+#                 */
/*   Updated: 2022/10/03 12:19:11 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() 
{
	WrongAnimal* wrong = new WrongCat();
	Animal* base = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();
	cat->makeSound();
	dog->makeSound();
	base->makeSound();

	delete wrong;
	delete base;
	delete dog;
	delete cat;

	return 0; 
}
