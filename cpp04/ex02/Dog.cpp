#include "Dog.hpp"

Dog::Dog(Dog const &other)
{
	std::cout << "Copy dog constructor called" << std::endl;
	*this = other;
	return ;
}


Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog Default constructor called" << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
	return ;
}

Dog	&Dog::operator=(Dog const &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wuff, Wuff" << std::endl;
	return ;
}
