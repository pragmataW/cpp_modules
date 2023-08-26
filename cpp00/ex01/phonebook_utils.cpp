#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

static std::string shortner(std::string str)
{
    std::string new_str;
    
    for(int i = 0; i < 9; i++)
    {
        new_str += str[i];
    }
    new_str += '.';
    return (new_str);
}

static std::string fill_str(std::string str)
{
    std::string new_str;
    int space_count;

    space_count = 10 - str.length();
    for (int i = 0; i < space_count; i++)
        new_str += " ";
    new_str += str;
    return (new_str);
}

void print_phonebook(PhoneBook *phonebook)
{
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "     index|" << "      name|" << "   surname|" << "  nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for(int i = 0; i < (*phonebook).index; i++)
    {
        std::cout << "         " << i << "|" << (*phonebook).contacts[i].getName() << "|" << (*phonebook).contacts[i].getSurname() << "|" << (*phonebook).contacts[i].getNickname() << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
    }
}

void formatter(PhoneBook *phonebook)
{
    std::string new_str;

    for(int i = 0; i < (*phonebook).index; i++)
    {
        if ((*phonebook).contacts[i].getName().length() > 10)
        {
            new_str = shortner((*phonebook).contacts[i].getName());
            (*phonebook).contacts[i].setName(new_str);
        }
        else
        {
            new_str = fill_str((*phonebook).contacts[i].getName());
            (*phonebook).contacts[i].setName(new_str);
        }

        if ((*phonebook).contacts[i].getSurname().length() > 10)
        {
            new_str = shortner((*phonebook).contacts[i].getSurname());
            (*phonebook).contacts[i].setSurname(new_str);
        }
        else
        {
            new_str = fill_str((*phonebook).contacts[i].getSurname());
            (*phonebook).contacts[i].setSurname(new_str);
        }

        if ((*phonebook).contacts[i].getNickname().length() > 10)
        {
            new_str = shortner((*phonebook).contacts[i].getNickname());
            (*phonebook).contacts[i].setNickname(new_str);
        }
        else
        {
            new_str = fill_str((*phonebook).contacts[i].getNickname());
            (*phonebook).contacts[i].setNickname(new_str);
        }

        if ((*phonebook).contacts[i].getNumber().length() > 10)
        {
            new_str = shortner((*phonebook).contacts[i].getNumber());
            (*phonebook).contacts[i].setNumber(new_str);
        }
        else
        {
            new_str = fill_str((*phonebook).contacts[i].getNumber());
            (*phonebook).contacts[i].setNumber(new_str);
        }

        if ((*phonebook).contacts[i].getSecret().length() > 10)
        {
            new_str = shortner((*phonebook).contacts[i].getSecret());
            (*phonebook).contacts[i].setSecret(new_str);
        }
        else
        {
            new_str = fill_str((*phonebook).contacts[i].getSecret());
            (*phonebook).contacts[i].setSecret(new_str);
        }
    }
}