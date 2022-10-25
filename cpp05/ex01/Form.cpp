#include "Form.hpp"

Form::Form(std::string const name, int grade_sign, int grade_exec) :
	name(name),
	sign(false),
	grade_sign(grade_sign),
	grade_exec(grade_exec)
{
	this->tryGrade(grade_sign);
	this->tryGrade(grade_exec);
	return ;
}

Form::Form(Form const &other) :
	name(other.name),
	sign(false),
	grade_sign(other.grade_sign),
	grade_exec(other.grade_exec)
{
	return ;
}

Form::Form() : 
	grade_exec(0),
	grade_sign(0),
	sign(false),
	name(name)
{
	return ;
}

Form::~Form()
{
	return ;
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->sign = rhs.sign;
	return (*this);
}

bool	Form::tryGrade(int const grade)
{
	if (grade < MAX_GRADE)
		throw (GradeTooHighException());
	if (grade > MIN_GRADE)
		throw (GradeTooLowException());
	return (true);
}

void Form::beSigned(Bureaucrat &obj)
{
	if (this->getSign())
		throw AlreadySignedException();
	if (obj.getGrade() > MIN_GRADE || obj.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	this->sign = true;
	return ;
}

const std::string&	Form::getName()
{
	return (this->name);
}

bool const	Form::getSign()
{
	return (this->sign);
}

int		const Form::getGradeSign()
{
	return (this->grade_sign);
}

int		const Form::getGradeExec()
{
	return (this->grade_exec);
}

std::ostream& operator<<(std::ostream &out, Form &obj)
{
	out << obj.getName() << ", Form gradeSign = " << obj.getGradeSign() << ", gradeExec = " << obj.getGradeExec();
	if (obj.getSign())
		out << " and is signed";
	else
		out << " and is not signed!";
	return (out);
}

const char *Form::AlreadySignedException::what() const throw()
{
	return ("<Form> Already Signed!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("<Form> Grade to high");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("<Form> Grade to low");
}
