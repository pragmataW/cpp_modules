#include "contact.hpp"
#include <iostream>

//! CONSTRUCTER

Contacts::Contacts(std::string name, std::string surname, std::string number, std::string nickname, std::string secret)
{
    this->name = name;
    this->surname = surname;
    this->number = number;
    this->nickname = nickname;
    this->secret = secret;
}

//! GETTER METHODS

std::string Contacts::getName()const
{
    return (this->name);
}

std::string Contacts::getSurname()const
{
    return (this->surname);
}

std::string Contacts::getNumber()const
{
    return (this->number);
}

std::string Contacts::getNickname()const
{
    return (this->nickname);
}

std::string Contacts::getSecret()const
{
    return (this->secret);
}

//! SETTER METHODS

void Contacts::setName(std::string name)
{
    this->name = name;
}

void Contacts::setSurname(std::string surname)
{
    this->surname = surname;
}

void Contacts::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contacts::setNumber(std::string number)
{
    this->number = number;
}

void Contacts::setSecret(std::string secret)
{
    this->secret = secret;
}
