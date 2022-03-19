#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(std::string _name);
		Dog(const Dog& other);
		Dog &operator=(Dog const &other);
		virtual ~Dog();
		
		virtual void makeSound(void) const;
};

#endif