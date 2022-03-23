#include "iter.hpp"
#include <iostream>

template<typename T>
void func(T const &el){
	std::cout << el << " ";
	return ;
}

int main( void ) { 
	
	int arr1[4] = {3, 43, 23, 53};
	float arr2[3] = {3.4, 53.4, 21.5};
	iter(arr1, 4, &func);
	std::cout << "\n";
	iter(arr2, 3, &func);
	return (0);
}