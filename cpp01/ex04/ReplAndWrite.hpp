#ifndef REPLANDWRITE_HPP
#define REPLANDWRITE_HPP

#include <iostream>
#include <fstream>

class ReplAndWrite
{
	private:

	public:
		ReplAndWrite(std::string filename, std::string s1, std::string s2);
		~ReplAndWrite(void);
};

void replaceAll(std::string &str, const std::string &from, const std::string &to);

#endif /* REPLANDWRITE_HPP */