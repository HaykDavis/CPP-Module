#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat *bob = new Bureaucrat("Bob", 3);
	Bureaucrat *jim = new Bureaucrat("Jim", 149);
	Form *B = new Form("28B", 70, 70);

	std::cout << *bob << *jim << std::endl;
	std::cout << *B << std::endl;

	std::cout << "~INVALID GRADE CONSTRUCTOR TEST~\n" << std::endl;
	try
	{
		Bureaucrat mike("Mike", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}

	try
	{
		Bureaucrat mike("Mike", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}

	try
	{
		Form C("28C", 0, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}

	try
	{
		Form C("28C", 151, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}

	std::cout << "~~~~~~~~~SIGNED TESTS~~~~~~~~~~~\n" << std::endl;

	try
	{
		B->beSigned(*jim);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *B << std::endl;

	try
	{
		B->beSigned(*bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *B << std::endl;

	delete jim;
	delete bob;
	delete B;
	return 0;

}