/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:48:49 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/25 15:38:22 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap one("jim");
	ClapTrap two("bob");
	ClapTrap three(one);


	ClapTrap("four") = two;
	one.attack("bob");
	two.takeDamage(4);
	three.takeDamage(25);
	three.beRepaired(10);
	return (0);
}
