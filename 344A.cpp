//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, total = 1, temp = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp2;
        std::cin >> temp2;
        if (temp2 != temp)
        {
            total++;
            temp = temp2;
        }
    }

    std::cout << --total;

    return 0;
}