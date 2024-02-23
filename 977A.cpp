//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, k;
    std::cin >> n;
    std::cin >> k;

    for (int i = 0; i < k; i++)
    {
        (n % 10) ? n-- : n /= 10;
    }

    std::cout << n;

    return 0;
}