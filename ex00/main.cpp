#include "ClapTrap.hpp"

int main( void )
{
	{
		ClapTrap lucas("Lucas");
	}
	{
		ClapTrap lucas("Lucas");

		lucas.attack("Camilo");
		lucas.takeDamage(8);
		lucas.takeDamage(2);
		lucas.attack("Camilo");
		lucas.beRepaired(10);
	}
	{
		ClapTrap lucas("Lucas");

		for (int i = 0; i < 11 ; i++)
			lucas.beRepaired(1);

		ClapTrap lucasClone(lucas);
		ClapTrap lucasAssignment("test");

		lucasAssignment = lucasClone;
	}
	return 0;
}
