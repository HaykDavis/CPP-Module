#include "Zombie.hpp"

void randomChump(std::string name) {

	Zombie randomChump;

	randomChump.setName(name);
	randomChump.announce();
}