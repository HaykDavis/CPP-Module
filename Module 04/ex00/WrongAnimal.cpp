# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default Constructor called\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << "WrongAnimal Copy constructor called\n";
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other){
	std::cout << "WrongAnimal Copy assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal said: >>>\n";
}

const std::string &WrongAnimal::getType(void) const{
	return (this->type);
}