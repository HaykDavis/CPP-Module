#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), gun(nullptr){}

HumanB::~HumanB(){}

void HumanB::attack(){
	if (gun) {
		
		std::cout << this->name << "  attacks with their " << gun->getType() << "\n";
		return;
	}

	std::cout << this->name << ": ther is no weapon" << "\n";
}
void HumanB::setWeapon(Weapon &gun){
	this->gun = &gun;
}