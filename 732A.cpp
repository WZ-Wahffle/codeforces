//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int k, r, shovelcount = 1;
    std::cin >> k >> r;

    while (shovelcount * k % 10 - r != 0 && shovelcount * k % 10 != 0) shovelcount++;

    std::cout << shovelcount;

    return 0;
}