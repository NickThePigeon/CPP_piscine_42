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

		/* all compare operations returns a boolean */
		bool	operator>(Fixed const	&other) const;
		bool	operator<(Fixed const	&other) const;
		bool	operator<=(Fixed const	&other) const;
		bool	operator>=(Fixed const	&other) const;
		bool	operator==(Fixed const	&other) const;
		bool	operator!=(Fixed const	&other) const;
		// Fixed	operator*();
		
		Fixed	operator*(Fixed const	&other);
		Fixed	operator/(Fixed const	&other);
		Fixed	operator+(Fixed const	&other);
		Fixed	operator-(Fixed const	&other);

		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void)	const;
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);

		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
};

Fixed &max(Fixed &a, Fixed &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed const &max(Fixed const &a, Fixed const &b);
Fixed const &min(Fixed const &a, Fixed const &b);
std::ostream& operator<<(std::ostream & o, Fixed const &other);
#endif	/* FIXED_HPP */