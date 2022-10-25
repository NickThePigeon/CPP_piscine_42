/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/06 14:22:51 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/14 11:55:30 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie*	zombieArray;
	int N  = 20;

	zombieArray = zombieHorde(N, "zoom");
	for (int i = 0; i < N; i++)
		zombieArray[i].announce();

	delete [] zombieArray;
	return (0);
}