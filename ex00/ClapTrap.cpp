#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap" << _name << " was brought into the world" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap" << _name << " exploded " << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap" << _name << " attacked " << target << ", causing the devastating quantity of " << _attackDamage << " points of damage!!!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints > 0)
		std::cout << "ClapTrap" << _name << " doesn't have energy left to attack ClapTrap " << target << std::endl;
	else if (_energyPoints > 0)
		std::cout << "ClapTrap" << _name << "is dead, it cannot attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap" << _name << " recieved " << amount << "points of damage!" << std::endl;
	_hitPoints-=amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap" << _name << " is repairing himself!, it gained " << _hitPoints << "health points" << std::endl;
		_hitPoints+=amount;
	}
	else if (_hitPoints > 0)
		std::cout << "ClapTrap" << _name << " doesn't have energy left to repair himself :(" << std::endl;
	else if (_energyPoints > 0)
		std::cout << "ClapTrap" << _name << "is dead, it cannot repair himself" << std::endl;
}
