#include "FragTrap.hpp"

int main() {
	{
		FragTrap e("Fraggy");
		FragTrap f("Chadd");

		e.highFivesGuys();
		e.attack("some random dude");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("some random dude");
		f.highFivesGuys();
	}
	return (0);
}