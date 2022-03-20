#ifndef ANIMALA_HPP
# define ANIMALA_HPP

# include <string>
# include <iostream>


class AnimalA {
	protected:
		std::string type;
	public:
		AnimalA();
		AnimalA(std::string type);
		AnimalA(const AnimalA& other);
		AnimalA &operator=(AnimalA const &other);
		virtual ~AnimalA();

		const std::string &getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif