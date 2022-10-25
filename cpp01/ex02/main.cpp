/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/06 14:24:44 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/06 14:33:17 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR;
	
	stringPTR = &str;

	std::string& stringREF = str;

	std::cout << "address of str = " << &str << std::endl;
	std::cout << "address of stringPTR = " << &stringPTR << std::endl;
	std::cout << "address of stringREF = " << &stringREF << std::endl;

	std::cout << "value of str = " << str << std::endl;
	std::cout << "value of stringPTR = " << stringPTR << std::endl;
	std::cout << "value of stringREF = " << stringREF << std::endl;
	return (0);
}