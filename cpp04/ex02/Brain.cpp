#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
}

Brain::Brain(const Brain &original)
{
    *this = original;
}

Brain &Brain::operator=(const Brain &original)
{
    const std::string *tmp = original.getIdeas();

    for(int i = 0; i < 100; i++)
        this->ideas[i] = tmp[i];

    return (*this);
}

const std::string *Brain::getIdeas() const
{
    return(this->ideas);
}