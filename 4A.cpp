//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int in;
    std::cin >> in;
    (in % 2 == 0 && in > 2) ? std::cout << "YES" : std::cout << "NO";
    return 0;
}