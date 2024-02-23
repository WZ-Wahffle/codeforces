//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int k, n, w, price = 0;
    std::cin >> k;
    std::cin >> n;
    std::cin >> w;

    for (int i = 1; i <= w; i++)
    {
        price += i * k;
    }

    (price - n > 0) ? std::cout << price - n : std::cout << 0;

    return 0;
}