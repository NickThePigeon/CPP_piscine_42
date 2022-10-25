#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define MAX_GRADE 1
# define MIN_GRADE 150
# include <iostream>

class Bureaucrat
{
	protected:

		std::string const 	name;
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
		
		int		const getGrade();
		bool	tryGrade(int const grade);
		void	incrementGrade(int const add);
		void	decrementGrade(int const subtract);

};

std::ostream& operator<<(std::ostream & o, Bureaucrat &obj);

#endif /* BUREAUCRAT_HPP */
