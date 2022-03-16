#include "Fixed.hpp"

Fixed::Fixed() : num(0) {
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) {
	// std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::Fixed(int num){
    // std::cout << "Int constractor called" << std::endl;
    this->num = num << num_bits;
}

Fixed::Fixed(float num){
    // std::cout << "Float constractor called" << std::endl;
    this->num = static_cast<int>(roundf(num * (1 << num_bits)));
}

Fixed &Fixed::operator=(Fixed const &other){
	// std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->num = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	// std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const{
	// std::cout << "getRawBits member function called\n";
	return (this->num);
}

void Fixed::setRawBits( int const raw ){
	// std::cout << "setRawBits member function called\n";
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

bool Fixed::operator==(Fixed const &other) const {
	return (num == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const {
	return (num != other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const {
	return (num <= other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const {
	return (num >= other.getRawBits());
}

bool Fixed::operator>(Fixed const &other) const {
	return (num > other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const {
	return (num < other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &other) const {
	Fixed tmp;

	tmp.setRawBits(num + other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(Fixed const &other) const {
	Fixed tmp;

	tmp.setRawBits(num - other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(Fixed const &other) const {
	Fixed tmp;
	long val = num;
	val *= other.getRawBits();
	val /= (1 << num_bits);
	tmp.setRawBits(static_cast<int>(val));
	return (tmp);
}

Fixed Fixed::operator/(Fixed const &other) const {
	Fixed tmp;
	long val = num;
	if (other == 0) {
		tmp.setRawBits(0);
	} else {
		val <<= num_bits;
		val /= other.getRawBits();
		tmp.setRawBits(val);
	}
	return (tmp);
}

Fixed &Fixed::operator++(void) {
	this->num++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp_prev(*this);
	this->num++;
	return (tmp_prev);
}

Fixed &Fixed::operator--(void) {
	this->num--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp_prev(*this);
	this->num--;
	return (tmp_prev);
}

Fixed &Fixed::min(Fixed &value1, Fixed &value2) {
	if (value1 > value2)
		return (value2);
	else
		return (value1);
}

const Fixed &Fixed::min(const Fixed &value1, const Fixed &value2) {
	if (value1 > value2)
		return (value2);
	else
		return (value1);
}

Fixed &Fixed::max(Fixed &value1, Fixed &value2) {
	if (value1 > value2)
		return (value1);
	else
		return (value2);
}

const Fixed &Fixed::max(const Fixed &value1, const Fixed &value2) {
	if (value1 > value2)
		return (value1);
	else
		return (value2);
}