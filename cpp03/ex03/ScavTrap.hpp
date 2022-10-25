/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:10 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 14:34:51 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

	
	public:

		ScavTrap(std::string name);
		ScavTrap(ScavTrap &other);
		ScavTrap();
		~ScavTrap();
		void		attack(const std::string &target);
		void		guardGate();
		ScavTrap	&operator=(ScavTrap &other);
};

#endif /* SCAVETRAP_HPP */
