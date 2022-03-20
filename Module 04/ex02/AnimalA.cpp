#include "AnimalA.hpp"

AnimalA::AnimalA() {
	std::cout << "AnimalA default Constructor called\n";
}

AnimalA::~AnimalA() {
	std::cout << "AnimalA Destructor called\n";
}

AnimalA::AnimalA(const AnimalA& other){
	std::cout << "Animal Copy constructor called\n";
	*this = other;
}

AnimalA &AnimalA::operator=(AnimalA const &other){
	std::cout << "AnimalA Copy assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void AnimalA::makeSound(void) const{
	std::cout << "AnimalA said: >>>\n";
}

const std::string &AnimalA::getType(void) const{
	return (this->type);
}