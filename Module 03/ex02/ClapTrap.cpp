#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _health_pionts(10), _energy_points(10), _attack_damage(0), _name("_name") {
	std::cout << "ClapTrap Constructor called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor " + _name + " called\n";
}

ClapTrap::ClapTrap(std::string _name) : _health_pionts(10), _energy_points(10), _attack_damage(0), _name(_name) {
	std::cout << "ClapTrap Constructor " + _name + " called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "ClapTrap Copy constructor called\n";
	*this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other){
	std::cout << "ClapTrap Copy assignment operator called\n";
	if (this != &other)
	{
		this->_health_pionts = other._health_pionts;
		this->_attack_damage = other._attack_damage;
		this->_energy_points = other._energy_points;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	std::cout << "ClapTrap " << _name << " attack " 
        << target << ", making " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	_health_pionts = (_health_pionts < amount ? 0 : _health_pionts - amount);
    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage! " 
    << _health_pionts << " points is left!" << std::endl;
    if (_health_pionts == 0){
        _energy_points -= 1;
        std::cout << "ClapTrap " << _name << " took " << 1 << " points of energy! " 
            << _energy_points << " points is left!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
	_health_pionts += amount;
    std::cout << "ClapTrap " << _name << " got " << amount << " points! " 
    << _health_pionts << " is left!" << std::endl;
}

	unsigned int ClapTrap::getHealth(void) const {
		return (this->_health_pionts);
	}

	unsigned int ClapTrap::getEnergy(void) const {
		return (this->_energy_points);
	}

	unsigned int ClapTrap::getAttack(void) const {
		return (this->_attack_damage);
	}

	std::string ClapTrap::getName(void) const {
		return (this->_name);
	}
