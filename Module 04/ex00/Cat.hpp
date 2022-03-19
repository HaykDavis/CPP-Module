#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(std::string _name);
		Cat(const Cat& other);
		Cat &operator=(Cat const &other);
		virtual ~Cat();
		
		virtual void makeSound(void) const;
};

#endif