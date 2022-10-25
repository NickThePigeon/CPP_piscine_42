#include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::Intern(Intern const &other)
{
	*this = other;
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern&	Intern::operator=(Intern const &rhs)
{
	return (*this);
}

Form*	Intern::PresidentialPardon(std::string const &target) const
{
	Form *ret;
	ret = new PresidentialPardonForm(target);
	return (ret);
}

Form*	Intern::RobotomyRequest(std::string const &target) const
{
	Form *ret;
	ret = new RobotomyRequestForm(target);
	return (ret);
}
Form*	Intern::ShrubberyCreation(std::string const &target) const
{
	Form *ret;
	ret = new ShrubberyCreationForm(target);
	return (ret);
}

const std::string	Intern::_formName[3] = {"presidential pardon", "robotomy request", "shruberry creation"};
const FP			Intern::_formPointer[3] = {&Intern::PresidentialPardon, &Intern::RobotomyRequest, &Intern::ShrubberyCreation};

Form*	Intern::makeForm(std::string form_name, std::string targetName)
{
	Form	*formcase;

	formcase = nullptr;
	for (int i = 0; i < 3; i++) {
		if (form_name == this->_formName[i]) {
			formcase = (this->*_formPointer[i])(targetName);
			std::cout << "Intern creates <form>" << std::endl;
			return (formcase);
		}
	}
	throw NoFormWithGivenNameException();
}

const char *Intern::NoFormWithGivenNameException::what() const throw()
{
	return ("No <Form> with given target name");
}
