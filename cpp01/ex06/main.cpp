#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "This program accept only 2 arguments!" << std::endl, -1);
    Harl harl;
    harl.complain(av[1]);
}