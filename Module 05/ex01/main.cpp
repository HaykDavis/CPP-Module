#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat *b = new Bureaucrat("bob", 3);
	Bureaucrat *a = new Bureaucrat("jim", 149);

	std::cout << *b;
	std::cout << *a << std::endl;

	b->incrementGrade();
	b->incrementGrade();
	try
	{
		b->incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << *b << std::endl;

	a->decrementGrade();

	try
	{
		a->decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << *a << std::endl;


	delete a;
	delete b;
	return 0;

}