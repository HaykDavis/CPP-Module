#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "no name";
	_health_pionts = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap Constructor called\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor " + _name + " called\n";
}

ScavTrap::ScavTrap(std::string _name) {
	this->_name = _name;
	_health_pionts = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap Constructor " + _name + " called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other){
	std::cout << "ScavTrap Copy constructor called\n";
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other){
	std::cout << "ScavTrap Copy assignment operator called\n";
	if (this != &other)
	{
		this->_health_pionts = other._health_pionts;
		this->_attack_damage = other._attack_damage;
		this->_energy_points = other._energy_points;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target){
	std::cout << "ScavTrap " << _name << " attack " 
        << target << ", making " << _attack_damage << " points of damage!\n";
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode\n";
}