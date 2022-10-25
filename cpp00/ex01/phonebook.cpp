/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/01 16:52:56 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/15 13:03:33 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::_InitPhoneBook(void)
{
	std::cout <<"______    ______   _        ______   _____    ______  _    _    2000" << std::endl;
	std::cout <<"| |  | \\ / |  | \\ | |      / |  | \\ | | \\ \\  | |     \\ \\  / / " << std::endl;     
	std::cout <<"| |__| | | |  | | | |   _  | |  | | | |  | | | |----  >|--|<  " << std::endl;    
	std::cout <<"|_|  \\_\\ \\_|__|_/ |_|__|_| \\_|__|_/ |_|_/_/  |_|____ /_/  \\_\\ " << std::endl;

	this->status = 1;
	this->topcontact = 0;
	this->fullcontacts = false;
	return ;
}

void	PhoneBook::exit(void)
{
	std::cout << " __    ___   ___   ___       ___  _     ____ " << std::endl;
	std::cout << "/ /`_ / / \\ / / \\ | | \\     | |_) \\ \\_/ | |_ " << std::endl;
	std::cout << "\\_\\_/ \\_\\_/ \\_\\_/ |_|_/     |_|_)  |_|  |_|__" << std::endl;
	this->status = 0;
	return ;
}

void	PhoneBook::search(void)
{
	int contacts;

	if (fullcontacts == true)
		contacts = 7;
	else
		contacts = this->topcontact;
	if (contacts == 0)
	{
		std::cout << "No contacts saved in PhoneBook" << std::endl;
		return ;
	}
	for (int i = 0; i < contacts; i++)
		std::cout << "|" << std::setw(10) << (i + 1)
			<< "|" << std::setw(10) << this->Contacts[i].firstname
				<< "|" << std::setw(10) << this->Contacts[i].lastname
					<< "|" << std::setw(10) << this->Contacts[i].nickname << "|" << std::endl;
	return ;
}

void	PhoneBook::reloadpage(void)
{
	std::cout << "Please Type 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
	return ;
}

void	PhoneBook::add(void)
{
	if (this->topcontact == 8) {
		this->fullcontacts = true;
		this->topcontact = 0;
	}
	while (!(this->Contacts[this->topcontact].firstname.empty()))
	{
		std::cout << "please write your First Name" << std::endl;
		getline(std::cin, this->Contacts[this->topcontact].firstname);
	}
	if (this->Contacts[this->topcontact].firstname.length() > 10)
	{
		this->Contacts[this->topcontact].firstname.erase(10);
		this->Contacts[this->topcontact].firstname[9] = '.';
	}
	while (!(this->Contacts[this->topcontact].lastname.empty()))
	{
		std::cout << "please write your Last Name" << std::endl;
		getline(std::cin, this->Contacts[this->topcontact].lastname);
	}
	if (this->Contacts[this->topcontact].lastname.length() > 10)
	{
		this->Contacts[this->topcontact].lastname.erase(10);
		this->Contacts[this->topcontact].lastname[9] = '.';
	}
	while (!(this->Contacts[this->topcontact].nickname.empty()))
	{
		std::cout << "please write your nickname" << std::endl;
		getline(std::cin, this->Contacts[this->topcontact].nickname);
	}
	if (this->Contacts[this->topcontact].nickname.length() > 10)
	{
		this->Contacts[this->topcontact].nickname.erase(10);
		this->Contacts[this->topcontact].nickname[9] = '.';
	}
	while (!(this->Contacts[this->topcontact].phonenumber.empty()))
	{
		std::cout << "please write your phone number" << std::endl;
		getline(std::cin, this->Contacts[this->topcontact].phonenumber);
	}
	while (!(this->Contacts[this->topcontact].secret.empty()))
	{
		std::cout << "please write your darkest secret" << std::endl;
		getline(std::cin, this->Contacts[this->topcontact].secret);
	}
	std::cout << "contact saved under id number " << this->topcontact + 1 << "." << std::endl;
	this->topcontact++;
	return ;
}

void	PhoneBook::error_input(void)
{
	std::cout << "I didn't understand your input" << std::endl;
	return ;
}

PhoneBook::PhoneBook(void)
{
	this->_InitPhoneBook();
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int		main(int argc, char **argv)
{
	PhoneBook instance;
	std::string operation;

	while (instance.status)
	{
		instance.reloadpage();
		std::getline(std::cin, operation);
		if (operation == "ADD")
			instance.add();
		else if (operation == "SEARCH")
			instance.search();
		else if (operation == "EXIT")
			instance.exit();
		else
			instance.error_input();
	}
	return (0);

}
