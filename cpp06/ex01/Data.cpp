#include "Data.hpp"

Data::Data() : one(1), two(2), three(3)
{
	std::cout << "Data instance" << std::endl;
	return ;
}

Data::Data(Data const &other) : one(1), two(2), three(3)
{
	*this = other;
	return ;
}

Data::~Data()
{
	std::cout << "Data destructed" << std::endl;
	return ;
}

Data &Data::operator=(Data const &rhs)
{
	return (*this);
}

void Data::printMembers()
{
	std::cout << "print members one,two,three "
		<< this->one << ", " << this->two << ", "
			<< this->three;
	std::cout << std::endl;
}

Data* deserialize(uintptr_t raw)
{
	Data *retData;

	retData = reinterpret_cast<Data*>(raw);
	return (retData);
}
