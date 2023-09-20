#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &original);
        virtual ~Animal();
        Animal &operator=(const Animal &original);
        virtual void makeSound() const = 0;
        std::string getType() const;
        void setType(std::string type);
};
