/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:53 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/25 15:46:47 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
	private:


	public:

		FragTrap(std::string name);
		FragTrap(FragTrap &other);
		FragTrap();
		~FragTrap();

		void highFivesGuys(void);
		FragTrap &operator=(FragTrap &other);
};

#endif /* FRAGTRAP_HPP */
