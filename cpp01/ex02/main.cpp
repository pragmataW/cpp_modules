#include <iostream>

int main()
{
    std::string str("HI THIS IS BRAIN");
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "string's memory address: " << &str << std::endl;
    std::cout << "address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "address held by stringREF: " << &stringREF << std::endl;

    std::cout << "string's value: " << str << std::endl;
    std::cout << "value held by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value held by stringREF: " << stringREF << std::endl;
}