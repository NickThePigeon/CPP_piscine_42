#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("robotomy request", target, 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) :
	Form("robotomy request", other.getTarget(), 72, 45)
{
	*this = other;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	*this = other;
	return (*this);
}

void	RobotomyRequestForm::executeConcrete() const
{
	int random;

	std::cout << "LOUD DRILLING NOISES!!!" << std::endl;
	srand(time(NULL));
	random = rand() % (100 + 1);
	if (random % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized, 50% of the time" << std::endl;
	else
		std::cout << this->getTarget() << " failed for robotomy" << std::endl;
	return ;
}
