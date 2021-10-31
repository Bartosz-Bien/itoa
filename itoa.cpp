// =========================
//
//  Author: Bartosz Bien
//
//  !!! Details about this project in README.md  !!!
//
//  This file contains code for the function itoa()
//
// =========================

#include <cstring>
#include <vector>
#include <iostream>


void convert_to_any_base (std::vector <short> &val_signs, int value, int base)
{
    short temp;
    while (value != 0)
    {
        temp = value % base;

        (temp > 9) ? temp += 'A' - '0' - 10 : temp = temp;

        val_signs.push_back (temp);
        value /= base;
    }
}

std::string itoa (int value, std::string &str, int base)
{
    str = "";
    std::vector <short> val_signs;

    convert_to_any_base(val_signs, value, base);

    for (int i = 0; i < val_signs.size(); i++)
        str += val_signs[val_signs.size() - 1 - i] + '0';

    return str;
}


#ifndef itoa
char* itoa (int value, char* str, int base)
{
    std::string str_temp = "";
    itoa (value, str_temp, base);

    for (int i = 0; i < str_temp.length(); i++)
        str[i] = str_temp[i];

    return str;
}
#endif // itoa
