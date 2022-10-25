#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(Convert const &other) {
	*this = other;
}

Convert &Convert::operator=(Convert const &rhs)
{
	return (*this);
}


Convert::Convert(float const x)
{
	std::cout << "Float instance" << std::endl;
	this->float_convert = x;
	this->double_convert = static_cast<double>(this->float_convert);
	if (std::isinf(x) || std::isnan(x))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << this->float_convert << "f" << std::endl;
		std::cout << "double: " << this->double_convert << std::endl;
		return ;
	}
	if (x > 0 && x < 256) {
		this->char_convert = static_cast<char>(this->float_convert);
		if (this->char_convert >= 32 && this->char_convert <= 127)
			std::cout << "char: " << this->char_convert << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	if (x > INT32_MAX || x < INT32_MIN)
		std::cout << "int: Overflowing" << std::endl;
	else
	{
		this->integer_convert = static_cast<int>(this->float_convert);
		std::cout << "int: " << this->integer_convert << std::endl;
	}
	std::cout << "float: " << this->float_convert << "f" << std::endl;
	std::cout << "double: " << this->double_convert << std::endl;
	return ;
}

Convert::Convert(double const x)
{
	std::cout << "Double instance" << std::endl;
	this->double_convert = x;
	if (std::isinf(x) || std::isnan(x))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		this->float_convert = static_cast<float>(this->double_convert);
		std::cout << "float: " << this->float_convert << "f" << std::endl;
		std::cout << "double: " << this->double_convert << std::endl;
		return ;
	}
	if (x > 0 && x < 256) {
		this->char_convert = static_cast<char>(this->double_convert);
		if (this->char_convert >= 32 && this->char_convert <= 127)
			std::cout << "char: " << this->char_convert << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: Impossible" << std::endl;
	if (x > INT32_MAX || x < INT32_MIN)
		std::cout << "int: Impossible" << std::endl;
	else
	{
		this->integer_convert = static_cast<int>(this->double_convert);
		std::cout << "int: " << this->integer_convert << std::endl;
	}
	if (x > FLT_MAX || x < FLT_MIN)
		std::cout << "Float: Impossible" << std::endl;
	else
	{
		this->float_convert = static_cast<float>(this->double_convert);
		std::cout << "float: " << this->float_convert << "f" << std::endl;
	}
	std::cout << "double: " << this->double_convert << std::endl;
	return ;
}

Convert::Convert(int const x)
{
	std::cout << "Int instance" << std::endl;
	this->integer_convert = x;
	if (x > 0 && x < 256)
	{
		this->char_convert = static_cast<char>(this->double_convert);
		if (this->char_convert >= 32 && this->char_convert <= 127)
			std::cout << "char: " << this->char_convert << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: Impossible" << std::endl;
	std::cout << "int: " << this->integer_convert << std::endl;
	this->float_convert = static_cast<float>(this->integer_convert);
	std::cout << "float: " << this->float_convert << "f" << std::endl;
	this->double_convert = static_cast<double>(this->integer_convert);
	std::cout << "double: " << this->double_convert << std::endl;
	return ;
}
Convert::Convert(char const x)
{
	std::cout << "Char instance" << std::endl;
	this->char_convert = x;
	std::cout << "char: " << this->char_convert << std::endl;
	this->integer_convert = static_cast<int>(this->char_convert);
	std::cout << "int: " << this->integer_convert << std::endl;
	this->float_convert = static_cast<float>(this->integer_convert);
	std::cout << "float: " << this->float_convert << "f" << std::endl;
	this->double_convert = static_cast<double>(this->integer_convert);
	std::cout << "double: " << this->double_convert << std::endl;
	return ;
}

Convert::~Convert()
{
	return ;
}


const char *Convert::NotPrintCharException::what() const throw()
{
	return ("Argument out of range printable character");
}
