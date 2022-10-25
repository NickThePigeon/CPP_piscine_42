/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/04 19:33:29 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/04 19:33:30 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie zombie_one("zombie one");
	Zombie* zombie_two;
	zombie_two = newZombie("zombie two");
	randomChump("zombie three");
	zombie_one.announce();
	zombie_two->announce();

	delete zombie_two;
	return(0);
}
