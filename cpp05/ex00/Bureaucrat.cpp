#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
	this->tryGrade(grade);
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) :
	name(other.name),
	grade(other.grade)
{
	*this = other;
	return ;
}

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->grade = rhs.grade;
	return (*this);
}

bool	Bureaucrat::tryGrade(int const grade)
{
	if (grade < MAX_GRADE)
		throw (GradeTooHighException());
	if (grade > MIN_GRADE)
		throw (GradeTooLowException());
	this->grade = grade;
	return (true);
}

std::string	const Bureaucrat::getName()
{
	return (this->name);
}

int	const Bureaucrat::getGrade()
{
	return (this->grade);
}

void	Bureaucrat::decrementGrade(int const subtract)
{
	if (subtract < 0)
		throw (GradeCantBeNegative());
	this->tryGrade(subtract + this->grade);
	return ;
}

void	Bureaucrat::incrementGrade(int const add)
{
	if (add < 0)
		throw (GradeCantBeNegative());
	this->tryGrade(this->grade - add);
	return ;
}

std::ostream& operator<<(std::ostream &out, Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("<Bureaucrat> Grade to high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("<Bureaucrat> Grade to low");
}

const char *Bureaucrat::GradeCantBeNegative::what() const throw()
{
	return ("<Bureaucrat> Grade less then zero");
}
