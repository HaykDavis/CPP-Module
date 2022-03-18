#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string inp);
		ScavTrap(const ScavTrap& other);
		ScavTrap &operator=(ScavTrap const &other);
		virtual ~ScavTrap();

		void guardGate();
        void attack(std::string const & target);
};

#endif