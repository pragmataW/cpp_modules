#include "ClapTrap.hpp"

//!constructor
// ClapTrap::ClapTrap()
// {

// }

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor Called!" << std::endl;
    this->name = name;
    this->hp = 10;
    this->energy = 10;
    this->damage = 0;
}

//!copy constructor
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap Copy Constructor Called!" << std::endl;
    *this = copy;
}

//!destructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called!" << std::endl;
}

//!Operator overload =
ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    this->name = copy.getName();
    this->hp = copy.getHp();
    this->energy = copy.getEnergy();
    this->damage = copy.getDamage();
    return (*this);
}

//! Getter Methods
std::string ClapTrap::getName() const
{
    return (this->name);
}

int ClapTrap::getHp() const
{
    return (this->hp);
}

int ClapTrap::getEnergy() const
{
    return (this->energy);
}

int ClapTrap::getDamage() const
{
    return (this->damage);
}

//! Setter Methods
void ClapTrap::setHp(int amount)
{
    this->hp = amount;
}

void ClapTrap::setEnergy(int amount)
{
    this->energy = amount;
}

void ClapTrap::setDamage(int amount)
{
    this->damage = amount;
}

//!Member Functions

void ClapTrap::attack(const std::string& target)
{
    if (this->hp <= 0)
        return ;
    if (this->energy <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " does not have any energy points to attack\n";
        return ;
    }
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!\n";
    this->energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp <= 0)
        return ;
    if (this->hp <= (int)amount)
    {
        std::cout << this->getName() << " is died\n";
        this->hp -= amount;
        return ;
    }
    std::cout << this->getName() << " has take " << amount << " point of damage\n";
    this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hp <= 0)
        return ;
    if (this->energy <= 0)
    {
        std::cout << this->getName() << "does not have any energy points to repair itself\n";
        return ;
    }
    std::cout << this->getName() << " has repaired " << amount << " point of itself\n";
    this->energy--;
    this->hp += amount;
}