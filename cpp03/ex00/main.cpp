#include "ClapTrap.hpp"

int main()
{
	{
        ClapTrap a("Robot");
		ClapTrap b("Cody");

		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Someone");
		b.beRepaired(3);
	}
	return (0);
}