#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Type.hpp"

int 	main()
{
	Base *one = new B();
	Base &two = *one;
	Base *three = new C();
	Base &four = *three;
	identify(one);
	identify(two);
	identify(three);
	identify(four);

	delete one;
	delete three;
	return (0);
}