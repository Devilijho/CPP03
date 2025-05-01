#include "ScavTrap.hpp"

int main( void )
{
	{
		ScavTrap evo("Evo");

		evo.attack("Arce");
		evo.guardGate();
		evo.guardGate();
	}
	{
		std::cout << "-------------------------------------------" << std::endl;
	}
	{
		ScavTrap foo("Foo");
		ScavTrap bar(foo);

		foo.beRepaired(12);
		bar.beRepaired(12);
	}
	std::cout << "-------------------------------------------" << std::endl;
	{
		ScavTrap zed("Zoo");
		ScavTrap zoo("Zed");

		zoo = zed;
		zoo.guardGate();
		zed.guardGate();
	}
	return 0;
}
