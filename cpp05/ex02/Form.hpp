#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		std::string	const	name;
		std::string	const	target;
		bool				sign;
		int const			grade_sign;
		int const 			grade_exec;
		virtual void	executeConcrete() const = 0;

	public:

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class SignException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		Form(std::string const name, std::string const &target, int grade_sign, int grade_exec);
		Form(Form const &other);
		Form();
		virtual ~Form() = 0;
		bool	tryGrade(int const grade);

		Form &operator=(Form const &rhs);

		const std::string&	getName() const;
		const std::string&	getTarget() const;
		int const getGradeSign() const;
		int const getGradeExec() const;
		bool const getSign() const;

		void	execute(Bureaucrat const &executor) const;
		void	beSigned(Bureaucrat const &obj);

};

std::ostream& operator<<(std::ostream & o, Form &obj);

#endif /* FORM_HPP */
