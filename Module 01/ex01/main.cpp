#include "Zombie.hpp"

int main() {
	int i = 0;
	Zombie *ZZZ;
	ZZZ = zombieHorde(10, "Vellie");
	while(++i < 10)
		ZZZ->announce();
	delete[] ZZZ;
}