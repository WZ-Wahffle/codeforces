//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{

    std::string s;
    std::cin >> s;

    int ratio = 0;

    for (auto ait: s)
    {
        (ait & 0b100000) ? ratio-- : ratio++;
    }

    for (auto &ait: s)
    {
        if (ratio <= 0)
        {
            ait |= 0b100000;
        }
        else
        {
            ait &= 0b11011111;
        }
    }

    std::cout << s;

    return 0;
}