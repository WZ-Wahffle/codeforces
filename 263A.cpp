//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int x = 0, y = 0;
    for (int i = 0; i < 25; i++)
    {
        int temp;
        std::cin >> temp;

        if (temp)
        {
            x = i % 5;
            y = i / 5;
        }
    }

    std::cout << abs(x - 2) + abs(y - 2);

    return 0;
}