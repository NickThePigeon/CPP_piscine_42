/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/07 11:07:59 by nicky         #+#    #+#                 */
/*   Updated: 2022/03/16 13:59:56 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ReplAndWrite.hpp"

int		main(int argc, char **argv)
{
	
	if (argc == 4)
		ReplAndWrite object(argv[1], argv[2], argv[3]);
	else
		std::cout << "To run program input must be ./loadReplace "
			"'filename' 'string 1' 'string 2'" << std::endl;
	return (0);
}
