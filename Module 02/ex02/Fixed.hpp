#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int num;
		static const int num_bits = 8;
	public:
		Fixed();
		Fixed(int num);
		Fixed(float num);
		Fixed(const Fixed& other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;

		Fixed &operator=(Fixed const &other);
		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		static Fixed &min(Fixed &value1, Fixed &value2); 
		static const Fixed &min(const Fixed &value1, const Fixed &value2); 
		static Fixed &max(Fixed &value1, Fixed &value2); 
		static const Fixed &max(const Fixed &value1, const Fixed &value2); 
};
std::ostream &operator<<(std::ostream &os, Fixed const &other);

#endif