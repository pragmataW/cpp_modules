#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor Called" << std::endl;
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(const Cat &original) : Animal()
{
    *this = original;
}

Cat::~Cat()
{
    std::cout << "Cat destructor Called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(const Cat &original)
{
    this->type = original.getType();
    this->brain = new Brain();
    return (*this);
}

void Cat::makeSound()const
{
    std::cout << "Meow!" << std::endl;
}