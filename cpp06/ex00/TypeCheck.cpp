#include "TypeCheck.hpp"

TypeCheck::TypeCheck() {}

TypeCheck::TypeCheck(TypeCheck const &other) 
{
	*this = other;
}

TypeCheck::~TypeCheck() {}

TypeCheck &TypeCheck::operator=(TypeCheck const &rhs)
{
	return (*this);
}

bool	TypeCheck::checkChar(std::string const &input)
{
	if ((input.length() == 1) && (std::isprint(input[0])) && (!std::isdigit(input[0])))
		return (true);
	return (false);
}

bool	TypeCheck::checkInt(std::string const &input)
{
	int i = 0;
	if (input.length() > 1)
		if (input[0] == '-' || input[0] == '+' || std::isdigit(input[0]))
			i++;
	for ( ; i < input.length(); i++) {
		if (!std::isdigit(input[i]))
			break ;
	}
	if (i == input.length())
		return (true);
	return (false);
}

/* check for limits when return true
   and the fmod function why? */

bool	TypeCheck::checkFloat(std::string const &input)
{
	char 	*ptr;
	float 	x;
	float 	check;


	if (input.empty())
		return (false);
	x = strtof(input.c_str(), &ptr);
	check = std::fmod(x, 1.0);
	if (!check)
		return (false);
	if (*ptr++ == 'f' && *ptr == '\0')
		return (true);
	return (false);
}

bool	TypeCheck::checkDouble(std::string const &input)
{
	char 	*ptr;
	double 	x;
	double 	check;


	if (input.empty())
		return (false);
	x = strtof(input.c_str(), &ptr);
	check = std::fmod(x, 1.0);
	if (!check)
		return (false);
	if (*ptr++ == '\0')
		return (true);
	return (false);
}

bool	TypeCheck::CheckNbArgs(int const totArgs)
{
	if (totArgs < 2)
		throw NoArgumentException();
	if (totArgs > 2)
		throw ToManyArgumentsException();
	return (true);
}

Convert*	TypeCheck::CheckAll(std::string const &input)
{
	Convert 	*retInstance;
	const char 	*input_array;

	input_array = &input[0];
	retInstance = nullptr;
	if (checkChar(input))
	{
		std::cout << "is char!" << std::endl;
		retInstance = new Convert(input_array[0]);
	}
	else if (checkFloat(input))
	{
		std::cout << "is float!" << std::endl;
		retInstance = new Convert(static_cast<float>(strtof(input_array, NULL)));
	}
	else if (checkDouble(input))
	{
		std::cout << "is Double!" << std::endl;
		retInstance = new Convert(static_cast<double>(strtod(input_array, NULL)));
	}
	else if (checkInt(input))
	{
		std::cout << "is int!" << std::endl;
		retInstance = new Convert(static_cast<int>(atoi(input_array)));
	}
	else
		throw ArgumentNotValidException();
	return (retInstance);
}

const char *TypeCheck::ToManyArgumentsException::what() const throw()
{
	return ("To many arguments, Example './Ex00 42.0f'");
}

const char *TypeCheck::NoArgumentException::what() const throw()
{
	return ("No argument given, Example './Ex00 42.0f'");
}

const char *TypeCheck::ArgumentNotValidException::what() const throw()
{
	return ("Non valid argument, no data type suited");
}
