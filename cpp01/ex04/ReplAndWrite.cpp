/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ReplAndWrite.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/16 15:12:50 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/16 15:13:14 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ReplAndWrite.hpp"
#include <sstream>

ReplAndWrite::ReplAndWrite(std::string filename, std::string s1, std::string s2)
{
	std::ifstream infile(filename, std::ifstream::binary);
	std::ofstream outfile(filename + ".replace", std::ofstream::binary);

	infile.seekg(0, infile.end);
	long size = infile.tellg();
	infile.seekg(0);

	char *buffer = new char[size];
	infile.read(buffer, size);

	std::string buf(buffer);
	if (s1.empty())
		std::cout << "string 1 is empty (nothing to replace)" << std::endl;
	if (s2.empty())
		std::cout << "string 2 is empty (nothing to replace)" << std::endl;
	
	replaceAll(buf, s1, s2);

	delete [] buffer;
	outfile << buf;

	outfile.close();
	infile.close();
}

void replaceAll(std::string &str, const std::string &from, const std::string &to)
{
	if (from.empty())
		return ;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

ReplAndWrite::~ReplAndWrite()
{
	return ;
}
