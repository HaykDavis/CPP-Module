#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default Constructor called\n";
	type = "Dog";
	if (!(brain = new Brain())) {
		std::cout << "Dog did not get memory in brain\n";
	}
}

Dog::~Dog() {
	std::cout << "Dog Destructor called\n";
	delete brain;
}

Dog::Dog(const Dog& other){
	std::cout << "Dog Copy constructor called\n";
	*this = other;
}

Dog &Dog::operator=(Dog const &other){
	std::cout << "Dog Copy assignment operator called\n";
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

void Dog::makeSound(void) const{
	std::cout << "Dog said: WOOOOOOFFFFF\n";
}

const Brain *Dog::getBrain(void) const{
	return (this->brain);
}

void Dog::setBrIdea(std::string idea, int i){
	this->brain->setIdeas(idea, i);
}

const std::string &Dog::getBrIdea(int i) const{
	return(this->brain->getIdeas(i));
}