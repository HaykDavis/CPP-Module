#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default Constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal Destructor called\n";
}

Animal::Animal(const Animal& other){
	std::cout << "Animal Copy constructor called\n";
	*this = other;
}

Animal &Animal::operator=(Animal const &other){
	std::cout << "Animal Copy assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Animal::makeSound(void) const{
	std::cout << "Animal said: >>>\n";
}

const std::string &Animal::getType(void) const{
	return (this->type);
}