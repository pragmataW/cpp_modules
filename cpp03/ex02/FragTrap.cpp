#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor Called!" << std::endl;
    this->hp = 100;
    this->energy = 100;
    this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy.getName())
{
    *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    this->hp = copy.getHp();
    this->energy = copy.getEnergy();
    this->damage = copy.getDamage();
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " want's to high five" << std::endl;
}
