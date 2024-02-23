//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;

    bool appeared[26]{false};
    int count = 0;

    for (auto ait: s)
    {
        appeared[(ait & 0b11111) - 1] = true;
    }

    for (auto ait: appeared)
    {
        if (ait)
        {
            count++;
        }
    }

    (count % 2) ? std::cout << "IGNORE HIM!" : std::cout << "CHAT WITH HER!";


    return 0;
}