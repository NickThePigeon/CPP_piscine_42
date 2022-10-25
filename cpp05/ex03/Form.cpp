#include "Form.hpp"

Form::Form(std::string const name, std::string const &target, int grade_sign, int grade_exec) :
	name(name),
	target(target),
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
	target(other.target),
	sign(false),
	grade_sign(other.grade_sign),
	grade_exec(other.grade_exec) 
{
	return ;
}

Form::Form() : grade_exec(0), grade_sign(0)
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

void Form::beSigned(Bureaucrat const &obj)
{
	if (this->getSign())
		throw AlreadySignedException();
	if (obj.getGrade() > MIN_GRADE || obj.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	this->sign = true;
	return ;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw SignException();
	if (executor.getGrade() > MIN_GRADE || executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	this->executeConcrete();
	return ;
}

const std::string&	Form::getName() const
{
	return (this->name);
}

const std::string&	Form::getTarget() const
{
	return (this->target);
}

bool const	Form::getSign() const
{
	return (this->sign);
}

int		const Form::getGradeSign() const
{
	return (this->grade_sign);
}

int		const Form::getGradeExec() const
{
	return (this->grade_exec);
}

std::ostream& operator<<(std::ostream &out, Form &obj)
{
	out << obj.getName() << ", Form gradeSign = " << obj.getGradeSign() << ", gradeExec = " << obj.getGradeExec();
	if (obj.getSign())
		out << " and is signed" << std::endl;
	else
		out << " and is not signed!" << std::endl;
	return (out);
}

const char *Form::SignException::what() const throw()
{
	return ("<Form> Cannot execute if not signed!");
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
