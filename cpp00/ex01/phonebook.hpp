#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class PhoneBook
{
    public:
        Contacts contacts[8];
        int index;
        PhoneBook();
        void add();
        void search();
};
void formatter(PhoneBook *phonebook);
void print_phonebook(PhoneBook *phonebook);
#endif