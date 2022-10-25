#include "Span.hpp"

int	main(void)
{
	try
	{
		{
			Span sp2(5);
			
			sp2.addNumber(1);
			sp2.addNumber(4);
			sp2.addNumber(-7);
			sp2.addNumber(200);
			// sp2.addNumber(-6); //throwing exception
			std::cout << sp2.longestSpan() << std::endl;
			std::cout << sp2.shortestSpan() << std::endl;
			sp2.printElements();
		}
		{
			Span sp3(100);
			std::vector<int> test(100, 10);

			sp3.addNumbersInRange(test.begin(), test.end());
			sp3.printElements();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}