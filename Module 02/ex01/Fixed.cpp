#include "Fixed.hpp"

Fixed::Fixed() : num(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::Fixed(int num){
    std::cout << "Int constractor called" << std::endl;
    this->num = num << num_bits;
}

Fixed::Fixed(float num){
    std::cout << "Float constractor called" << std::endl;
    this->num = static_cast<int>(roundf(num * (1 << num_bits)));
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

float Fixed::toFloat(void) const{
	return(static_cast<float>(this->num) / (1 << num_bits));
}

int Fixed::toInt(void) const{
	return(static_cast<int>(this->num >> num_bits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return (os);
}