#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "AnimalA.hpp"
# include "Brain.hpp"

class Dog : public AnimalA{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(std::string _name);
		Dog(const Dog& other);
		Dog &operator=(Dog const &other);
		virtual ~Dog();
		
		virtual void makeSound(void) const;
		const Brain *getBrain(void) const;
		void setBrIdea(std::string idea, int i);
		const std::string &getBrIdea(int i) const;
};

#endif