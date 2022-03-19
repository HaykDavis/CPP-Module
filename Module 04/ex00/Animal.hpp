#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>


class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& other);
		Animal &operator=(Animal const &other);
		virtual ~Animal();

		const std::string &getType(void) const;
		virtual void makeSound(void) const;
};

#endif