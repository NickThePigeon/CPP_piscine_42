/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 18:00:46 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/08 18:01:54 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanB	{

	private:

		std::string name;
		Weapon *club;

	public:
		HumanB(std::string const name);
		~HumanB(void);
		void	setWeapon(Weapon &club);
		Weapon&	getWeapon(void);

		void	attack(void);


};

#endif
