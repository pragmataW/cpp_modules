#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called!" << std::endl;
    this->type = "";
}

Animal::Animal(const Animal &original)
{
    *this = original;
}

Animal::~Animal()
{
    std::cout << "Animal destructor Called!" << std::endl;
}

Animal &Animal::operator=(const Animal &original)
{
    this->type = original.getType();
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}
