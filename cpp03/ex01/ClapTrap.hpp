/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:48:58 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/26 14:48:38 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:

	protected:

		std::string 	_Name;
		int				_HitPoints;
		int 			_EnergyPoints;
		int				_AttackDamage;	
		
	public:

		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &other);
		ClapTrap();
		~ClapTrap();
		ClapTrap &operator=(ClapTrap &other);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif /* CLAPTRAP_HPP */
