#pragma once

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &original);
        Brain &operator=(const Brain &original);
        const std::string *getIdeas() const;
};