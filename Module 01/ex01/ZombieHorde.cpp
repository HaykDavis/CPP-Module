#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ){

	int i = -1;
	Zombie* mass = new Zombie[N];
	while (++i < N)
		mass[i].setName(name);
	return (mass);
}