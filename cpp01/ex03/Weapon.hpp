/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 18:00:49 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/08 18:01:49 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

	private:

		std::string _type;

	public:

		Weapon(std::string const weapon);
		~Weapon(void);
		std::string	const	getType(void);
		void	setType(std::string const type);
};

#endif
