/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/06 14:23:06 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/06 14:23:07 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string const name )
{
	Zombie* ptrToFirstZombie;
	ptrToFirstZombie = new Zombie[N];

	for (int i = 0; i < N; i++)
		ptrToFirstZombie[i].setName(name);

	return (ptrToFirstZombie);
}
