#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl; 
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}