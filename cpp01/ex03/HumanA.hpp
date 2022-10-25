/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 18:01:31 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/08 18:01:41 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanA	{

	private:
		std::string name;
		Weapon &club;

	public:
		HumanA(std::string const name, Weapon &club);
		~HumanA(void);

		void	attack(void);

};

#endif
