/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 12:52:31 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/10 12:52:32 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
  	Fixed b( a );
  	Fixed c;
	c = b;
  	std::cout << a.getRawBits() << std::endl;
  	std::cout << b.getRawBits() << std::endl;
  	std::cout << c.getRawBits() << std::endl;

	return (0);
}