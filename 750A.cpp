//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, k, time = 240, count = 1;
    std::cin >> n >> k;

    time -= k;

    while (time >= count * 5)
    {
        time -= count * 5;
        count++;
    }

    count--;

    (count > n) ? std::cout << n : std::cout << count;
    return 0;
}