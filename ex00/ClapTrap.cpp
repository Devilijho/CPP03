#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << GREEN << "ClapTrap " << _name << " was brought into the world" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	this->_name = claptrap._name;
	this->_hitPoints = claptrap._hitPoints;
	this->_energyPoints = claptrap._energyPoints;
	this->_attackDamage = claptrap._attackDamage;
	std::cout << GREEN << "ClapTrap " << _name << " was brought into the world" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap " << _name << " exploded " << RESET << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacked " << target << ", causing the devastating quantity of " << _attackDamage << " points of damage!!!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints > 0)
		std::cout << "ClapTrap " << _name << " doesn't have energy left to attack ClapTrap " << target << std::endl;
	else if (_energyPoints > 0)
		std::cout << "ClapTrap " << _name << " is dead, it can't attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " received " << amount << " points of damage!" << std::endl;
	_hitPoints-=amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " is repairing himself, it gained " << amount << " health points" << std::endl;
		_hitPoints+=amount;
	}
	else if (_hitPoints > 0)
		std::cout << "ClapTrap " << _name << " doesn't have energy left to repair himself :(" << std::endl;
	else if (_energyPoints > 0)
		std::cout << "ClapTrap " << _name << " is dead, it cannot repair himself" << std::endl;
}
