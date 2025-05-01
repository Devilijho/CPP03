#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << GREEN << "DiamondTrap " << _name << " was brought into the world" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other._name + "_clap_name"), FragTrap(other._name), ScavTrap(other._name), _name(other._name)
{
	std::cout << GREEN << "DiamondTrap " << _name << " was brought into the world" << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << GREEN << "DiamondTrap " << _name << " is a DiamondTrap and " << ClapTrap::_name << " is a ClapTrap" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "DiamondTrap " << DiamondTrap::_name << " exploded" << RESET << std::endl;
}
