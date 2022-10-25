#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		{
			std::cout << "<------- Instance -------->" << std::endl;
			Bureaucrat one("john snow", 130);
			Form alpha(one.getName(), 131, 134);
			alpha.beSigned(one);
			one.decrementGrade(20);
			one.incrementGrade(50);
			std::cout << one << std::endl;
			std::cout << alpha << std::endl;
		}
		{
			std::cout << "<------- Instance -------->" << std::endl;
			Bureaucrat two("john wick", 122);
			Form bravo(two.getName(), 125, 55);
			bravo.beSigned(two);
			two.decrementGrade(20);
			two.incrementGrade(50);
			std::cout << two << std::endl;
			std::cout << bravo << std::endl;
		}
		{
			std::cout << "<------- Instance -------->" << std::endl;
			Bureaucrat three("john Constantine", -1);
			three.decrementGrade(20);
			three.incrementGrade(50);
			std::cout << three << std::endl;
		}
		{
			std::cout << "<------- Instance -------->" << std::endl;
			Bureaucrat four("john Gotti", 131);
			four.decrementGrade(20);
			four.incrementGrade(50);
			std::cout << four << std::endl;
		}
		{
			std::cout << "<------- Instance -------->" << std::endl;
			Bureaucrat five("john Hancock", 10);
			five.decrementGrade(20);
			five.incrementGrade(50);
			std::cout << five << std::endl;
		}
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
