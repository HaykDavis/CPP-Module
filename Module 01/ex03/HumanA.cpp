#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun) : gun(gun){
	this->name = name;
}

HumanA::~HumanA(){}

void HumanA::attack(){

	std::cout << this->name << " attacks with their" << gun.getType() << "\n";
}