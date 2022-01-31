#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	
	std::cout << this->name << " was killed" << "\n";
}

void Zombie::announce(){

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

void Zombie::setName(std::string name) {
	this->name = name;
}