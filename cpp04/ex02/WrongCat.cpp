#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor Called" << std::endl;
    this->type = "WrongCat";
    this->brain = new Brain();
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal()
{
    *this = original;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor Called" << std::endl;
    delete this->brain;
}

WrongCat &WrongCat::operator=(const WrongCat &original)
{
    this->type = original.getType();
    this->brain = new Brain();
    return (*this);
}

void WrongCat::makeSound()const
{
    std::cout << "Meow!" << std::endl;
}