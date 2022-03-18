#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
	public:
		FragTrap();
		FragTrap(std::string inp);
		FragTrap(const FragTrap& other);
		FragTrap &operator=(FragTrap const &other);
		~FragTrap();

		void highFivesGuys(void);
};

#endif