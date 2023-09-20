#pragma once

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
    private:
        Brain *brain;
    public:
        WrongCat();
        WrongCat(const WrongCat &original);
        ~WrongCat();
        WrongCat &operator=(const WrongCat &original);
        void makeSound() const;
};