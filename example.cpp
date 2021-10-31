#include <iostream>
#include "itoa.cpp"

int main ()
{
    int val;
    std::cin >> val;    // 1750

    // =================
    std::string str;

    itoa(val, str, 10);   // 1750
    std::cout << str << std::endl;

    itoa(val, str, 16);  // 6d6
    std::cout << str << std::endl;

    itoa(val, str, 2);  // 11011010110
    std::cout << str << std::endl;

    // ===================
    char tab[30];

    itoa(val, tab, 10);
    for (int i = 0; i < 4; i++)
        std::cout << tab[i];
    std::cout << std::endl;

    itoa(val, tab, 16);
    for (int i = 0; i < 3; i++)
        std::cout << tab[i];
    std::cout << std::endl;

    itoa(val, tab, 2);
    for (int i = 0; i < 11; i++)
        std::cout << tab[i];
    std::cout << std::endl;

    return 0;
}
