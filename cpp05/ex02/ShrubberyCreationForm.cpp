#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("shrubbery creation", target, 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
	Form("shrubbery creation", other.getTarget(), 145, 137)
{
	*this = other;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	*this = other;
	return (*this);
}

void	ShrubberyCreationForm::executeConcrete() const
{
	std::string filename;
	std::ofstream ofs;

	filename = (this->getTarget() + "_shrubbery");
	ofs.open(filename, std::ofstream::out | std::ofstream::trunc);
	ofs << "	    ,@@@@@@@,\n"
       "  ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
    ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
   ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
   "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
   "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
   "`&%\\ ` /%&'    |.|        \\ '|8'\n"
   "    |o|        | |         | |\n"
   "    |.|        | |         | |\n"
    "  \\/ ._\\//_/__/  ,\\_ //__\\/.  \\_//__/_" << std::endl;

	ofs.close();
}
