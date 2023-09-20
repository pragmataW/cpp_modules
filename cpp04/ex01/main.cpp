#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* animals[] = {new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat()};
    std::cout << "\n\n\n\n";
    std::cout << "\n\n\n\n";

    for(int i = 0; i < 10; i++)
        animals[i]->makeSound();

    std::cout << "\n\n\n\n";

    for (int i = 0; i < 10; i++)
        delete animals[i];

}