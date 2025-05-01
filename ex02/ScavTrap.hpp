#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &other);
		void	attack(const std::string& target);
		void	guardGate();
};
