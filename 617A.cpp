//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{

    int x, steps = 0;
    std::cin >> x;

    while (x > 5)
    {
        steps++;
        x -= 5;
    }

    std::cout << ++steps;

    return 0;
}
