//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, x = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::string in;
        std::cin >> in;

        (in[1] == '+') ? x++ : x--;

    }

    std::cout << x;

    return 0;
}