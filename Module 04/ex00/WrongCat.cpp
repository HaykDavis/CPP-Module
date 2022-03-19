# include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default Constructor called\n";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called\n";
}

WrongCat::WrongCat(const WrongCat& other){
	std::cout << "WrongCat Copy constructor called\n";
	*this = other;
}

WrongCat &WrongCat::operator=(WrongCat const &other){
	std::cout << "WrongCat Copy assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void WrongCat::makeSound(void) const{
	std::cout << "WrongCat said: WOOOF\n";
}