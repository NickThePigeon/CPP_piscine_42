#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include <fstream>

class Form;

class PresidentialPardonForm : public Form
{
	private:

		void	executeConcrete() const;

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
};




#endif /* PRESIDENTIALPARDONFORM_HPP */