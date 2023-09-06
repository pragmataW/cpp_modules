#include "Harl.hpp"
#include <iostream>
int main()
{
    Harl harl;
    harl.complain("");
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
}