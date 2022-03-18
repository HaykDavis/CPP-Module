#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_name = "no name";
	_health_pionts = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap Constructor called\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor " + _name + " called\n";
}

FragTrap::FragTrap(std::string _name) {
	this->_name = _name;
	_health_pionts = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap Constructor " + _name + " called\n";
}

FragTrap::FragTrap(const FragTrap& other){
	std::cout << "FragTrap Copy constructor called\n";
	*this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other){
	std::cout << "FragTrap Copy assignment operator called\n";
	if (this != &other)
	{
		this->_health_pionts = other._health_pionts;
		this->_attack_damage = other._attack_damage;
		this->_energy_points = other._energy_points;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << _name << " make a positive high five\n";
}