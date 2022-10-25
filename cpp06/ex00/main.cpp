#include <climits>
#include "Convert.hpp"
#include "TypeCheck.hpp"


int	main(int argc, char **argv)
{
	Convert 	*Converter;
	TypeCheck	one;

	if (one.CheckNbArgs(argc)) {
		Converter = one.CheckAll(argv[1]);
		delete Converter;
	}

	return (0);
}
