/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:01 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 15:18:09 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{

	ScavTrap	a;
	ScavTrap	b("Morgan");
	ClapTrap	c("Hugues");

	b.takeDamage(3);
	b.takeDamage(20);
	b.beRepaired(3);
	b.attack("Eric");
	b.attack("Eric");
	b.attack("Eric");
	b.beRepaired(6);
	b.attack("Eric");
	return (0);
}
