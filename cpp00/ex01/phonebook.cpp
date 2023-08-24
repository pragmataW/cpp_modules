#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook()
{
    this->index = 1;
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
    if (this->index < 9)
        this->index++;
}

void PhoneBook::search()
{
    int willSearch;

    std::cout << "Enter row that you want to search... ";
    std::cin >> willSearch;

    if (willSearch > this->index)
    {
        std::cout << "There is no row with that number!" << std::endl;
        return ;
    }

    std::cout << this->contacts[willSearch - 1].getName() << std::endl;
    std::cout << this->contacts[willSearch - 1].getSurname() << std::endl;
    std::cout << this->contacts[willSearch - 1].getNickname() << std::endl; //! BİTMEDİ, STRİNG FORMATLAMA İŞLEMİ YAPILACAK!
    std::cout << this->contacts[willSearch - 1].getNumber() << std::endl;
    std::cout << this->contacts[willSearch - 1].getSecret() << std::endl;
}