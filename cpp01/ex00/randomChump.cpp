/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/04 19:33:26 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/04 19:33:27 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie newZombie(name);
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
