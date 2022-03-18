#include "FragTrap.hpp"

int main(void){
    FragTrap Bob("Bob");
    std::cout << "FragTrap name: " << Bob.getName() << std::endl;
    std::cout << "FragTrap has: " << Bob.getHealth() << " hitpoints" << std::endl;
    std::cout << "FragTrap has: " << Bob.getEnergy() << " energy points" << std::endl;
    std::cout << "FragTrap has: " << Bob.getAttack() << " attack damage" << std::endl;

    Bob.attack("attack");
    Bob.takeDamage(15);
    Bob.beRepaired(5);
    Bob.highFivesGuys();
    Bob.takeDamage(20);
    Bob.beRepaired(50);
}