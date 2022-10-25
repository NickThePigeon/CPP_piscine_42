/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:16:39 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/22 13:07:42 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:

		int					value;
		static int const	FracBits = 8;


	public:

		Fixed(int const	Value);
		Fixed(float const Value);
		Fixed(Fixed const &other);
		Fixed(void);
		~Fixed();

		Fixed	&operator=(Fixed const	&other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void)	const;
	
};

std::ostream& operator<<(std::ostream & o, Fixed const &other);

#endif	/* FIXED_HPP */