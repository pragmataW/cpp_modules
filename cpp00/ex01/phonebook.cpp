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
    std::string name,surname, nickname, number, secret;

    if (i == 8)
        i = 0;
    std::cout << "Enter Name: ";
    getline(std::cin, name, '\n');
    while (name.length() == 0)
    {
        std::cout << "You have to fill contact info!" << std::endl;
        std::cout << "Enter Name: ";
        getline(std::cin, name, '\n');
    }

    std::cout << "Enter Surname ";
    getline(std::cin, surname); 
    while (surname.length() == 0)
    {
        std::cout << "You have to fill contact info!" << std::endl;
        std::cout << "Enter Surname ";
        getline(std::cin, surname, '\n');
    }

    std::cout << "Enter Nickname ";
    getline(std::cin, nickname);
    while (nickname.length() == 0)
    {
        std::cout << "You have to fill contact info!" << std::endl;
        std::cout << "Enter Nickname ";
        getline(std::cin, nickname, '\n');
    }

    std::cout << "Enter Number ";
    getline(std::cin, number);
    while (number.length() == 0)
    {
        std::cout << "You have to fill contact info!" << std::endl;
        std::cout << "Enter Number ";
        getline(std::cin, number, '\n');
    }

    std::cout << "Enter Darkest Secret ";
    getline(std::cin, secret);
    while (secret.length() == 0)
    {
        std::cout << "You have to fill contact info!" << std::endl;
        std::cout << "Enter Darkest Secret ";
        getline(std::cin, secret, '\n');
    }

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
    std::string strWillSearch;
    PhoneBook tmp;

    tmp = *this;
    formatter(&tmp);
    print_phonebook(&tmp);

    std::cout << "Enter row that you want to search... ";
    getline(std::cin, strWillSearch);
    willSearch = std::stoi(strWillSearch);
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

