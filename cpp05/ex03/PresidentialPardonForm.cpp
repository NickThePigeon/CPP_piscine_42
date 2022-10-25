#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("presidential pardon", target, 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) :
	Form("presidential pardon", other.getTarget(), 25, 5)
{
	*this = other;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	*this = other;
	return (*this);
}

void	PresidentialPardonForm::executeConcrete() const
{
	std::cout << "congratulations " << this->getTarget() << "!, you're been pardoned"
	" by Zaphod Beeblebrox" << std::endl;
	return ;
}

