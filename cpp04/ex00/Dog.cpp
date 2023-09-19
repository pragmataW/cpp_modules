#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &original) : Animal()
{
    *this = original;
}

Dog::~Dog()
{
    std::cout << "Dog destructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &original)
{
    this->type = original.getType();
    return (*this);
}

void Dog::makeSound()const
{
    std::cout << "Hav Hav" << std::endl;
}