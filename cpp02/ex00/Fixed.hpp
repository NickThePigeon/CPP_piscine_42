/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 12:52:26 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/10 12:52:27 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed
{
	private:

		int	Value;
		static const int fracBits = 8;

	public:

		Fixed(/* args */);
		~Fixed();
		Fixed(Fixed &other);
		Fixed& operator=(Fixed &other);
		int	getRawBits(void);
		void	setRawBits(int const raw);
};

#endif	/* FIXED_HPP */
