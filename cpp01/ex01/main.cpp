#include "Zombie.hpp"
#include <iostream>

int main()
{
    int n = 8;

    Zombie *myZombies = zombieHorde(n, "Yusuf");
    
    for(int i = 0; i < n; i++)
        myZombies[i].announce();
    
    delete[] myZombies;
}