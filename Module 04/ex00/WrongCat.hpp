#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	protected:
		std::string _name;
	public:
		WrongCat();
		WrongCat(std::string _name);
		WrongCat(const WrongCat& other);
		WrongCat &operator=(WrongCat const &other);
		virtual ~WrongCat();
		virtual void makeSound(void) const;
};

#endif