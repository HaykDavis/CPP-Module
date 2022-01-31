#include "Zombie.hpp"

int main() {

	Zombie* newzombie = newZombie("Ted");
	newzombie->announce();
	randomChump("Vellie");
	delete newzombie;
}