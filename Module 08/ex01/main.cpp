#include "easyfind.hpp"

int main(){
	std::vector<int> vec;
	std::list<int> lst;
	std::set<int> st;

	for (int i = 0; i < 5; i++){
		vec.push_back(i);
	}
	for (int i = 0; i < 5; i++){
		lst.push_back(i);
	}
	for (int i = 0; i < 5; i++){
		st.insert(i);
	}
	std::cout << "-----------TEST VECTOR-----------" << std::endl;
	try{
		std::vector<int>::iterator it = easyfind(vec, 1);
		std::cout << *it << std::endl;
	} catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::vector<int>::iterator it = easyfind(vec, 100);
		std::cout << *it << std::endl;
	} catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------TEST LIST-----------" << std::endl;
	try{
		std::list<int>::iterator it = easyfind(lst, 2);
		std::cout << *it << std::endl;
	} catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::list<int>::iterator it = easyfind(lst, 200);
		std::cout << *it << std::endl;
	} catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------TEST SET-----------" << std::endl;
	try{
		std::set<int>::iterator it = easyfind(st, 3);
		std::cout << *it << std::endl;
	} catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::set<int>::iterator it = easyfind(st, 300);
		std::cout << *it << std::endl;
	} catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}