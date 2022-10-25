/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:48 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 15:10:17 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:

		std::string _name;

	public:

		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &other);
		DiamondTrap();
		~DiamondTrap();
		void	attack(const std::string &target);
		void	whoAmI(void);
};


#endif /* DIAMONDTRAP_HPP */
