/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:23:27 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/25 15:26:34 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	{	
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);

		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* me = new Character("me");
		
		AMateria* tmp = NULL;
		AMateria* tmp2 = NULL;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		std::cout << tmp->getType() << std::endl;
		
		tmp2 = src->createMateria("cure");
		me->equip(tmp2);
		std::cout << tmp2->getType() << std::endl;
		
		ICharacter* bob = new Character("bob");

		me->use(-1, *bob);
		me->use(0, *bob);
		me->use(0, *bob);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->unequip(0);
		me->use(0, *bob);
		me->use(1, *bob);
		
		delete bob;
		delete me;
		delete src;
	}
	return (0);
}
