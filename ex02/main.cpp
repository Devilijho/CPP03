#include "FragTrap.hpp"

int main( void )
{
	{
		FragTrap test_subject("No1");

		test_subject.highFivesGuys();
		test_subject.attack("No2");
		test_subject.takeDamage(200);
		test_subject.beRepaired(5);
	}
}
