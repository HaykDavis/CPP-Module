#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed {
	private:
		int num;
		static const int num_bits;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed & operator = (Fixed const &other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif