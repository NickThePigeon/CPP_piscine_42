/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:08:57 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/18 14:22:47 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int argc, char **argv)
{
	Karen	karen;
	int 	i;

	std::string array[] = {
		"debug",
		"info",
		"warning",
		"error"	
	};

	if (argc == 2) {
		for (i = 0; i < 4; i++) {
			if (argv[1] == array[i])
				break;
		}
	}
	else
		i = 4;
	switch (i)
	{
		case 0:
			karen.debug();
		case 1:
			karen.info();
		case 2:
			karen.warning();
		case 3:
			karen.error();
		case 4:
			karen.wrong();
	}
	return (0);
}
