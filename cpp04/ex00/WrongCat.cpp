#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor Called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal()
{
    *this = original;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &original)
{
    this->type = original.getType();
    return (*this);
}

void WrongCat::makeSound()const
{
    std::cout << "Meow!" << std::endl;
}