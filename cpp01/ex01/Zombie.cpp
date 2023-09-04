#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{

    std::cout << "Zombie has been created!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}