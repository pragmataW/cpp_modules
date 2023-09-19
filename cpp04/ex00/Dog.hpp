#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &original);
        ~Dog();
        Dog &operator=(const Dog &original);
        void makeSound() const;
};