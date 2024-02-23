//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;

        std::cout << (n - 1) / 2 << std::endl;
    }

    return 0;
}