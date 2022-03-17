#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name){

}
ClapTrap::ClapTrap(const ClapTrap& other){

}

ClapTrap &ClapTrap::operator=(ClapTrap const &other){
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
	{
		this->_health_pionts = other._health_pionts;
		this->_attack_damage = other._attack_damage;
		this->_energy_points = other._energy_points;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){

}
void ClapTrap::attack(const std::string& target){

}
void ClapTrap::takeDamage(unsigned int amount){

}
void ClapTrap::beRepaired(unsigned int amount){

}
