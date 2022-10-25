/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 14:49:57 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/18 14:22:34 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define	KAREN_HPP

#include <iostream>

class Karen
{
	private:

	protected:

	public:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	wrong(void);
		Karen();
		~Karen();
		void	complain(std::string level);
};

#endif /* KAREN_HPP */
