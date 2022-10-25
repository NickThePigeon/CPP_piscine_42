#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>
# define MAX_GRADE 1
# define MIN_GRADE 150

class Form;

class Bureaucrat
{
	protected:

		std::string const	name;
		int					grade;

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
		class GradeCantBeNegative : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat();
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &rhs);
		std::string	const getName();
		
		int		const getGrade() const;
		bool	tryGrade(int const grade);
		void	incrementGrade(int const add);
		void	decrementGrade(int const subtract);
		void	signForm(Form &form);
		void	executeForm(Form const & form);

};

std::ostream& operator<<(std::ostream & o, Bureaucrat &obj);

#endif /* BUREAUCRAT_HPP */
