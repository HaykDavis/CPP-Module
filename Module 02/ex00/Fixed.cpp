#include "Fixed.hpp"

Fixed::Fixed() : num(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(Fixed const &other){
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->num = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return (this->num);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called\n";
	this->num = raw;
}