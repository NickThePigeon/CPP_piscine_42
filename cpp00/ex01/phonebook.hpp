/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/01 16:52:50 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/15 12:58:11 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contacts {

	public:
	
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	secret;
	
	private:


};

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);
		void	exit(void);
		void	reloadpage(void);
		void	error_input(void);
		int		status;
	
	private:

		Contacts Contacts[8];
		bool	fullcontacts;
		int		topcontact;
		void	_InitPhoneBook(void);
};

#endif /* PHONEBOOK_HPP */
