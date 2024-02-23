//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int a, b, years = 0;
    std::cin >> a;
    std::cin >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        years++;
    }

    std::cout << years;

    return 0;
}