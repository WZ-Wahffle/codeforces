//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    long long n, total = 0;
    std::cin >> n;

    (n % 2) ? std::cout << -(n + 1) / 2 : std::cout << n / 2;

    return 0;
}