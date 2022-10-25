#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <climits>
# include <cmath>
# include <float.h>

class Convert
{
	private:

		unsigned char 		char_convert;
		int					integer_convert;
		float				float_convert;
		double				double_convert;

	public:

		explicit Convert(char const x);
		explicit Convert(int const x);
		explicit Convert(float const x);
		explicit Convert(double const x);
		Convert();
		Convert(Convert const &other);
		~Convert();
		Convert &operator=(Convert const &rhs);

		class NotPrintCharException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		operator int() const;
		operator char() const;
		operator double() const;
		operator float() const;
};

#endif /* CONVERT_HPP */
