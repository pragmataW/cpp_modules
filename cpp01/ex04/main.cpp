#include <iostream>
#include <fstream>

void replace(std::string inputString, std::string s1, std::string s2, std::string fileName)
{
    size_t index = inputString.find(s1);
    std::ofstream outputFile(fileName + ".replace");
    while (index != std::string::npos)
    {
        inputString.erase(index, s1.length());
        inputString.insert(index, s2);
        index = inputString.find(s1);
    }
    outputFile << inputString << std::endl;
}

int main(int argc, char *argv[])
{

    std::string s1;
    std::string s2;
    std::string inputString;
    std::string line;

    if (argc != 4) {
        std::cerr << "usage: program name <file_name> <s1> <s2>" << std::endl;
        return 1;
    }

    s1 = argv[2];
    s2 = argv[3];

    if (s1 == s2)
    {
        std::cerr << "you must enter different strings" << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);

    if (!inputFile) {
        std::cerr << "File open error!: " << argv[1] << std::endl;
        return 1;
    }

    while (getline(inputFile, line))
        inputString += line + '\n';
    inputFile.close();

    replace(inputString, s1, s2, argv[1]);
}