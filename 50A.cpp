//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int m, n;
    std::cin >> m;
    std::cin >> n;

    if ((m * n) % 2)
    {
        std::cout << (m * n - 1) / 2;
    }
    else
    {
        std::cout << m * n / 2;
    }

    return 0;
}