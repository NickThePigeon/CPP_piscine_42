/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/01 16:53:01 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/01 16:53:02 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
	int i;
	int k;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{	
		for (i = 1; i < argc; i++)
		{
			k = 0;
			while (argv[i][k])
			{
				argv[i][k] = std::toupper(argv[i][k]);
				k++;
			}
			std::cout << argv[i];
		}
	}
	std::cout << std::endl;
	return (0);
}
