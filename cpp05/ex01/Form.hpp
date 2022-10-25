#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		std::string	const	name;
		bool				sign;
		int const			grade_sign;
		int const 			grade_exec;

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
		Form(std::string const name, int grade_sign, int grade_exec);
		Form(Form const &other);
		Form();
		~Form();
		bool	tryGrade(int const grade);

		Form &operator=(Form const &rhs);
		const std::string&	getName();
		int const getGradeSign();
		int const getGradeExec();
		bool const getSign();
		void	beSigned(Bureaucrat &obj);

};

std::ostream& operator<<(std::ostream & o, Form &obj);

#endif /* FORM_HPP */
