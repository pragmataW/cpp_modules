#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contacts
{
    private:
        std::string name;
        std::string surname;
        std::string number;
        std::string nickname;
        std::string secret;
    public:
        //*CONSTRUCTER
        Contacts(std::string name = "", std::string surname = "", std::string number = "", std::string nickname = "", std::string secret = "");
        //* GETTER METHODS
        std::string getName()const;
        std::string getSurname()const;
        std::string getNumber()const;
        std::string getNickname()const;
        std::string getSecret()const;
        //* SETTER METHODS
        void setName(std::string name);
        void setSurname(std::string surname);
        void setNumber(std::string number);
        void setNickname(std::string nickname);
        void setSecret(std::string secret);
};

#endif