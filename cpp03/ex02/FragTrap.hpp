/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 23:49:23 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/25 15:44:35 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
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

#endif