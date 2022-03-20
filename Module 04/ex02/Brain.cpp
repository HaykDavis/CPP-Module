# include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default Constructor called\n";
}

Brain::~Brain() {
	std::cout << "Brain Destructor called\n";
}

Brain::Brain(const Brain& other){
	std::cout << "Brain Copy constructor called\n";
	*this = other;
}

Brain &Brain::operator=(Brain const &other){
	std::cout << "Brain Copy assignment operator called\n";
	if (this != &other) {
		for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

void Brain::setIdeas(std::string str, int i){
	this->ideas[i] = str;
}

const std::string &Brain::getIdeas(int i) const {
	return (this->ideas[i]);
}