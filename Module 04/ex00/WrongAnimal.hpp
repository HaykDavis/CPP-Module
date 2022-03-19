#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string _name);
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal &operator=(WrongAnimal const &other);
		virtual ~WrongAnimal();

		void makeSound(void) const;
		const std::string &getType(void) const;
};

#endif