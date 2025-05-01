#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << GREEN << "ScavTrap " << _name << " was brought into the world" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavpTrap " << _name << " charged towards " << target << ", causing the devastating quantity of " << _attackDamage << " points of damage!!!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints > 0)
		std::cout << "ScavTrap " << _name << " doesn't have energy left to attack " << target << std::endl;
	else if (_energyPoints > 0)
		std::cout << "ScavTrap " << _name << " is dead, it can't attack" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap._name)
{
	this->_name = scavtrap._name;
	this->_hitPoints = scavtrap._hitPoints;
	this->_energyPoints = scavtrap._energyPoints;
	this->_attackDamage = scavtrap._attackDamage;
	std::cout << GREEN << "ScavTrap " << _name << " was brought into the world" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void ScavTrap::guardGate()
{
	static int state = 0;

	if (state == 0)
	{
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
		state = 1;
	}
	else
		std::cout << "ScavTrap " << _name << " is already in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap " << _name << " exploded " << RESET << std::endl;
}
