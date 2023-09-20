#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor Called" << std::endl;
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::Dog(const Dog &original) : Animal()
{
    *this = original;
}

Dog::~Dog()
{
    std::cout << "Dog destructor Called" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(const Dog &original)
{
    this->type = original.getType();
    this->brain = new Brain();
    return (*this);
}

void Dog::makeSound()const
{
    std::cout << "Hav Hav" << std::endl;
}