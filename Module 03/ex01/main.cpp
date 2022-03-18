#include "ScavTrap.hpp"

int main(void){
    ScavTrap Bob("Bob");
    std::cout << "ScavTrap name: " << Bob.getName() << std::endl;
    std::cout << "ScavTrap has: " << Bob.getHealth() << " hitpoints" << std::endl;
    std::cout << "ScavTrap has: " << Bob.getEnergy() << " energy points" << std::endl;
    std::cout << "ScavTrap has: " << Bob.getAttack() << " attack damage" << std::endl;

    Bob.attack("attack");
    Bob.takeDamage(15);
    Bob.beRepaired(5);
    Bob.guardGate();
    Bob.takeDamage(20);
    Bob.beRepaired(50);
}