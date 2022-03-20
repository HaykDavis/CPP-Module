#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(std::string _name);
		Cat(const Cat& other);
		Cat &operator=(Cat const &other);
		virtual ~Cat();
		
		virtual void makeSound(void) const;
		const Brain *getBrain(void) const;
		void setBrIdea(std::string idea, int i);
		const std::string &getBrIdea(int i) const;
};

#endif