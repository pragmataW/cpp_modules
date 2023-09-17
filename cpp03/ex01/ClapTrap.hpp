#pragma once

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int hp;
        int energy;
        int damage;
    public:
        //!constructor
        //ClapTrap();
        ClapTrap(std::string name);
        //!copy constructor
        ClapTrap(const ClapTrap &copy);
        //!destructor
        ~ClapTrap();
        //!Operator overload =
        ClapTrap &operator=(const ClapTrap &copy);
        //! Getter methods
        std::string getName() const;
        int getHp() const;
        int getEnergy() const;
        int getDamage() const;
        //! Setter Methods
        void setHp(int amount);
        void setEnergy(int amount);
        void setDamage(int amount);
        //! Member functions
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};