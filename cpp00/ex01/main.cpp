#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string opt;

    std::cout << "\033[2J\033[H";
    std::cout << "Welcome, for add a person to phone book write ADD, for search a person write SEARCH and for close program write EXIT...  " << std::endl;
    while (true)
    {
        std::cout << "Enter Option~> ";
        getline(std::cin, opt);
        if (!opt.compare("ADD"))
            phonebook.add();
        else if (!opt.compare("SEARCH"))
            phonebook.search();
        else if (!opt.compare("EXIT"))
        {
            std::cout << "See you soon!";
            return (0);
        }
    }
    return (0);
}