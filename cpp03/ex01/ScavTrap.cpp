#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called!" << std::endl;
    this->hp = 100;
    this->energy = 50;
    this->damage = 20;
}

//!copy constructor
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.name)
{
    std::cout << "ClapTrap Copy Constructor Called!" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    this->name = copy.getName();
    this->hp = copy.getHp();
    this->energy = copy.getEnergy();
    this->damage = copy.getDamage();
    return(*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (this->hp <= 0)
        return ;
    if (this->energy <= 0)
    {
        std::cout << "ScavTrap " << this->getName() << " does not have any energy points to attack\n";
        return ;
    }
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!\n";
    this->energy--;
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}