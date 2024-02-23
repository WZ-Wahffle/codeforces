//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, h, width = 0;
    std::cin >> n;
    std::cin >> h;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        (temp > h) ? width += 2 : width++;
    }

    std::cout << width;

    return 0;
}