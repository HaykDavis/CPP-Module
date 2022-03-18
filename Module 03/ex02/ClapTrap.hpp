#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {
	protected:
		unsigned int _health_pionts;
		unsigned int _energy_points;
		unsigned int _attack_damage;
		std::string _name;
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& other);
		ClapTrap &operator=(ClapTrap const &other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		unsigned int getHealth(void) const;
		unsigned int getEnergy(void) const;
		unsigned int getAttack(void) const;
		std::string getName(void) const;
};

#endif