//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, count = 0;
    std::cin >> n;

    for (auto ait: {100, 20, 10, 5, 1})
    {
        while (n >= ait)
        {
            n -= ait;
            count++;
        }
    }

    std::cout << count;

    return 0;
}