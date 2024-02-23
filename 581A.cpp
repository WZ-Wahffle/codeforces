//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    a > b ? std::cout << b << " " << (a - b) / 2 : std::cout << a << " " << (b - a) / 2;


    return 0;
}