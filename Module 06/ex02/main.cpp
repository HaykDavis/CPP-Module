#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cmath>

Base *genClass(void){
	int random;
	
	srand((unsigned)time(nullptr));
	random = rand() % 3;

	switch (random)
	{
	case 1:
		return(new A());
	case 2:
		return(new B());
	default:
		return(new C());
	}
}

void recust(Base &p){
	try{
		Base a = dynamic_cast<A &>(p);
		std::cout << "Class A \n";
	} catch(const std::exception &e) {}
	try{
		Base a = dynamic_cast<B &>(p);
		std::cout << "Class B \n";
	} catch(const std::exception &e) {}
	try{
		Base a = dynamic_cast<C &>(p);
		std::cout << "Class C \n";
	} catch(const std::exception &e) {}
	return ;
}

void recust(Base *p){
	if (dynamic_cast<A *>(p))
		std::cout << "Class A \n";
	if (dynamic_cast<B *>(p))
		std::cout << "Class B \n";
	if (dynamic_cast<C *>(p))
		std::cout << "Class C \n";
	return ;
}

int main(){
	Base *clas = genClass();
	recust(clas);
	recust(*clas);
	delete clas;
	return (0);
}