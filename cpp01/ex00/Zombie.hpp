/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/04 19:33:17 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/04 19:33:18 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	public:

		Zombie(std::string name);
		~Zombie(void);
		void	announce( void );
	
	private:

		std::string _name;

};

	Zombie* newZombie(std::string name);
	void	randomChump(std::string name);

#endif