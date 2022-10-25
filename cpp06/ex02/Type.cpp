#include "Type.hpp"

Base * generate(void)
{
	Base 			*retAbcPtr;
	unsigned int	random;

	srand(time(NULL));
	random = (rand() % 3 + 1);
	switch (random)
	{
		case 1: {
			retAbcPtr = new A();
			return (retAbcPtr);
		}
		case 2: {
			retAbcPtr = new B();
			return (retAbcPtr);
		}
		case 3: {
			retAbcPtr = new C();
			return (retAbcPtr);
		}
	}
	return (nullptr);
}

void identify(Base* p)
{
	Base* retPtr;
	
	retPtr = dynamic_cast<A*>(p);
	if (retPtr) {
		std::cout << "the Type of the Base pointer is A*" << std::endl;
		return ;
	}
	retPtr = dynamic_cast<B*>(p);
	if (retPtr) {
		std::cout << "the Type of the Base pointer is B*" << std::endl;
		return ;
	}
	retPtr = dynamic_cast<C*>(p);
	if (retPtr) {
		std::cout << "the Type of the Base pointer is C*" << std::endl;
		return ;
	}
}

void identify(Base& p)
{	
	try
	{
		Base& retRef = dynamic_cast<A&>(p);
		std::cout << "the Type of the Base reference is A&" << std::endl;
	}
	catch(const std::bad_cast& e) {}
	try
	{
		Base& retRef = dynamic_cast<B&>(p);
		std::cout << "the Type of the Base reference is B&" << std::endl;
	}
	catch(const std::bad_cast& e) {}
	try
	{
		Base& retRef = dynamic_cast<C&>(p);
		std::cout << "the Type of the Base reference is C&" << std::endl;
	}
	catch(const std::bad_cast& e) {}
}
