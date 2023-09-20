#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &original);
        ~Cat();
        Cat &operator=(const Cat &original);
        void makeSound() const;
};