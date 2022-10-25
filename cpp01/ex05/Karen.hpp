/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 18:04:52 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/08 18:04:57 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define	KAREN_HPP

#include <iostream>

class Karen
{
	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Karen(/* args */);
		~Karen();
		void	complain(std::string level);
};

#endif /* KAREN_HPP */
