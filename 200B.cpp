//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    long long n, total = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        total += temp;
    }

    std::cout << double(total) / double(n);

    return 0;
}