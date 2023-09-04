#include <iostream>

std::string megaphone(std::string str)
{
    std::string loudStr;
    int size = str.length();

    for (int i = 0; i < size; i++)
        loudStr += toupper(str[i]);
    return (loudStr);
}

int main(int argc, char **argv)
{
    std::string loudStr;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++)
        {
            loudStr = megaphone(argv[i]);
            std::cout << loudStr;
        }
        std::cout << std::endl;
    }
}
