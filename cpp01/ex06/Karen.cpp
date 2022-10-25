/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 14:49:41 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/18 14:26:04 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple"
		"-pickle-special- ketchup burger. I really do!" << std::endl;
	return ;
}

void	Karen::info(void)
{

	std::cout << "I cannot believe adding extra bacon costs more money."
		" You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Karen::warning(void)
{

	std::cout << "I think I deserve to have some extra bacon for free."
		" I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Karen::error(void)
{

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Karen::wrong(void)
{

	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;
}

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}
