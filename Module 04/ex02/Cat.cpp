#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default Constructor called\n";
	type = "Cat";
	if (!(brain = new Brain()))
		std::cout << "Cat did not get memory in brain\n";
}

Cat::~Cat() {
	std::cout << "Cat Destructor called\n";
	delete brain;
}

Cat::Cat(const Cat& other){
	std::cout << "Cat Copy constructor called\n";
	*this = other;
}

Cat &Cat::operator=(Cat const &other){
	std::cout << "Cat Copy assignment operator called\n";
	if (this != &other)
	{
		this->type = other.type;
		Brain *brains = new Brain();
		delete brain;
		*brains = *(other.brain);
		this->brain = brains;
	}
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "Cat said: MEEEEEW-MEEEEW\n";
}

const Brain *Cat::getBrain(void) const{
	return (this->brain);
}

void Cat::setBrIdea(std::string idea, int i){
	this->brain->setIdeas(idea, i);
}

const std::string &Cat::getBrIdea(int i) const{
	return(this->brain->getIdeas(i));
}