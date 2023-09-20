#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called!" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
    *this = original;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor Called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original)
{
    this->type = original.getType();
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "regular WrongAnimal sound" << std::endl;
}