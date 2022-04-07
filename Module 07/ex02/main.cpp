#include "Array.hpp"
#include <iostream>


int	main(void)
{
	Array<int> a = Array<int>(5);

	std::cout << "--------------ACCESS--------------" << std::endl;
	try{
		a[4] = 3;
		a[0] = 0;
		std::cout << a[4] << std::endl << a[1] << std::endl;
	} catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
		std::cout << a[6] << std::endl;
	}catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------ITER--------------" << std::endl;
	try{
		for (unsigned int i = 0; i < a.size(); i++)
			a[i] = i;
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------COPY--------------"<< std::endl;
	try{
		Array<int> b = a;
		b[0] = 123456;
		std::cout << "ARRAY a: \n";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
		std::cout << "ARRAY b: \n";
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
	}catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	return (0);
}