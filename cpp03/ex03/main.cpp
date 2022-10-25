/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:56 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 15:13:41 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	FragTrap	a;
	DiamondTrap	b("Morgan");
	ClapTrap	c("Hugues");
	ScavTrap	d("Ben");

	b.whoAmI();
	std::cout << "===" << std::endl;
	b.takeDamage(3);
	b.takeDamage(20);
	b.beRepaired(3);
	b.attack("Eric");
	b.attack("Eric");
	b.attack("Eric");
	b.beRepaired(100);
	b.attack("Eric");
	return (0);
}
