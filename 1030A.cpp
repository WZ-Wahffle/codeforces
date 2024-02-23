//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, total = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        total += temp;
    }

    total ? std::cout << "HARD" : std::cout << "EASY";

    return 0;
}