//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;

    s[0] &= 0b11011111;

    std::cout << s;

    return 0;
}