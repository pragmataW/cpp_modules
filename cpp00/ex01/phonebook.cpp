#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

void PhoneBook::add()
{
    static int i;
    std::string name;
    std::string surname;
    std::string nickname;
    std::string number;
    std::string secret;

    if (i == 8)
        i = 0;
    std::cout << "Enter Name: ";
    std::cin >> name;
    std::cout << "Enter Surname ";
    std::cin >> surname; 
    std::cout << "Enter Nickname ";
    std::cin >> nickname;
    std::cout << "Enter Number ";
    std::cin >> number;
    std::cout << "Enter Darkest Secret ";
    std::cin >> secret;

    this->contacts[i].setName(name);
    this->contacts[i].setSurname(surname);
    this->contacts[i].setNickname(nickname);
    this->contacts[i].setNumber(number);
    this->contacts[i].setSecret(secret);
    i++;
    if (this->index < 8)
        this->index++;
    std::cout << "Person has been added!" << std::endl;
}

void PhoneBook::search()
{
    int willSearch;
    PhoneBook tmp;

    tmp = *this;
    formatter(&tmp);
    print_phonebook(&tmp);

    std::cout << "Enter row that you want to search... ";
    std::cin >> willSearch;
    if (willSearch > this->index - 1 || willSearch < 0)
    {
        std::cout << "There is no row with that number!" << std::endl;
        return ;
    }
    std::cout << this->contacts[willSearch].getName() << std::endl;
    std::cout << this->contacts[willSearch].getSurname() << std::endl;
    std::cout << this->contacts[willSearch].getNickname() << std::endl;
    std::cout << this->contacts[willSearch].getNumber() << std::endl;
    std::cout << this->contacts[willSearch].getSecret() << std::endl; 
}
