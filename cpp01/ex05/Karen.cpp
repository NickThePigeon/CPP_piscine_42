/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 18:05:01 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/08 18:05:02 by nduijf        ########   odam.nl         */
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

/* Karen::complain initialize a pointer to the private functions, 
   and a string array in the same order, with a loop i compare level to complain arr.
   if it matches the the same index of ptrToComplaints gets called */

void	Karen::complain(std::string level)
{

	void	(Karen::*ptrToComplaints[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string complain_arr[] = {
		"debug",
		"info",
		"warning",
		"error" };

	for (int i = 0; i < 4; i++)
	{
		void (Karen::*complaint)(void) = ptrToComplaints[i];
		if (level == complain_arr[i])
		{
			(this->*complaint)();
			return ;
		}
	}
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
