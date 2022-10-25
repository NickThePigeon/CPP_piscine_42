/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 11:45:05 by nicky         #+#    #+#                 */
/*   Updated: 2022/09/20 13:39:11 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	private:

		std::string ideas[100];
		
	public:
		Brain();
		Brain(Brain const &other);
		~Brain();
		Brain &operator=(Brain const &other);

};

#endif /* BRIAN_HPP */
