#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &original);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &original);
        void makeSound() const;
        std::string getType() const;
        void setType(std::string type);
};
