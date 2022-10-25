#ifndef TYPECHECK_HPP
# define TYPECHECK_HPP

# include <iostream>
# include <climits>
#include <cmath>
# include "Convert.hpp"

class TypeCheck
{
	private:


	public:

		TypeCheck();
		TypeCheck(TypeCheck const &other);
		~TypeCheck();
		TypeCheck &operator=(TypeCheck const &rhs);

		class ToManyArgumentsException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class NoArgumentException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class ArgumentNotValidException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		Convert*	CheckAll(std::string const &input);
		bool		CheckNbArgs(int const totArgs);
		bool		checkDouble(std::string const &input);
		bool		checkFloat(std::string const &input);
		bool		checkInt(std::string const &input);
		bool		checkChar(std::string const &input);
};


#endif /* TYPECHECK_HPP */
