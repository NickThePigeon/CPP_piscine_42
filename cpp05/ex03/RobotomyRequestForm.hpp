#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <fstream>

class Form;

class RobotomyRequestForm : public Form
{
	private:

		void	executeConcrete() const;

	public:
	
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		~RobotomyRequestForm();
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);
};




#endif /* ROBOTOMYREQUESTFORM_HPP */