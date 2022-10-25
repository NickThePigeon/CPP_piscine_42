/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:47:29 by nicky         #+#    #+#                 */
/*   Updated: 2022/10/03 12:15:59 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

#define HLFBR_SIZE 100

int main() 
{
	const Animal* halfbreed[HLFBR_SIZE]; 

	for (size_t i = 0; i < HLFBR_SIZE; i++)
	{
		if (i % 2 == 0)
			halfbreed[i] = new Dog();
		else
			halfbreed[i] = new Cat();
	}

	for (size_t i = 0; i < HLFBR_SIZE; i++)
		delete halfbreed[i];

	return (0);
}
