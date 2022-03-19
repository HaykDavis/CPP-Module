#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default Constructor called\n";
}

Dog::~Dog() {
	std::cout << "Dog Destructor called\n";
}

Dog::Dog(const Dog& other){
	std::cout << "Dog Copy constructor called\n";
	*this = other;
}

Dog &Dog::operator=(Dog const &other){
	std::cout << "Dog Copy assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Dog::makeSound(void) const{
	std::cout << "Dog said: WOOOOOOFFFFF\n";
}