/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/06 14:22:57 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/15 13:07:10 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {

	public:

		Zombie(void);
		~Zombie(void);
		Zombie*		zombieHorde( int N, std::string name );
		void	announce( void );
		void	setName(std::string const name);
	
	private:

		std::string _name;

};


#endif /* ZOMBIE_HPP */