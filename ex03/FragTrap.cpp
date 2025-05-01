#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << GREEN << "FragTrap " << _name << " was brought into the world" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap._name)
{
	this->_name = fragtrap._name;
	this->_hitPoints = fragtrap._hitPoints;
	this->_energyPoints = fragtrap._energyPoints;
	this->_attackDamage = fragtrap._attackDamage;
	std::cout << GREEN << "FragTrap " << _name << " was brought into the world" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

void	FragTrap::highFivesGuys(void)
{
	std::string response;
	std::cout << GREEN << "FragTrap " << _name << " raises his arm to high five you!" << RESET << std::endl;
	std::cout << "PRESS ENTER TO HIGH FIVE" << std::endl;
	if (getline(std::cin, response))
	{
		if (response == "")
			std::cout << GREEN << "FragTrap " << _name << " high fives you!" << RESET << std::endl;
		else
			std::cout << RED << "FragTrap " << _name << " ignores you!" << RESET << std::endl;
	}
}

FragTrap::~FragTrap()
{
	std::cout << RED << "FragTrap " << _name << " exploded" << RESET << std::endl;
}
