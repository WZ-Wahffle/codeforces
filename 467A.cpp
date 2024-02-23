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
        int temp1, temp2;
        std::cin >> temp1;
        std::cin >> temp2;
        if (temp2 - temp1 >= 2)
        {
            total++;
        }
    }

    std::cout << total;

    return 0;
}