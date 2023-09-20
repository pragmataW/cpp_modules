#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        Animal* animals[] = {new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat()};
        std::cout << "\n\n\n\n";

        for(int i = 0; i < 10; i++)
            animals[i]->makeSound();

        std::cout << "\n\n\n\n";

        for (int i = 0; i < 10; i++)
            delete animals[i];
    }

    {
        WrongAnimal* animals[] = {new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat()};
        std::cout << "\n\n\n\n";

        for(int i = 0; i < 10; i++)
            animals[i]->makeSound();

        std::cout << "\n\n\n\n";

        for (int i = 0; i < 10; i++)
            delete animals[i];
    }

}