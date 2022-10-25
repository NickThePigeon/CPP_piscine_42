#ifndef INTERN_HPP
#define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern;

typedef Form* (Intern::*FP)(std::string const &target) const;

class Intern
{
	private:

		static const std::string	_formName[3];
		static const FP			_formPointer[3];

	public:

		class NoFormWithGivenNameException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		Intern();
		Intern(Intern const &other);
		~Intern();

		Form*	PresidentialPardon(std::string const &target) const;
		Form*	RobotomyRequest(std::string const &target) const;
		Form*	ShrubberyCreation(std::string const &target) const;

		Intern&	operator=(Intern const &rhs);
		Form*	makeForm(std::string formName, std::string targetName);
};



#endif /* INTERN_HPP */