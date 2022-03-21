#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default Constructor called\n";
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat Destructor called\n";
}

Cat::Cat(const Cat& other){
	std::cout << "Cat Copy constructor called\n";
	*this = other;
}

Cat &Cat::operator=(Cat const &other){
	std::cout << "Cat Copy assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "Cat said: MEEEEEW-MEEEEW\n";
}