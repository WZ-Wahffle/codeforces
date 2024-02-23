//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>
#include <set>

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {

        long long a, b, count = 0;
        std::cin >> a;
        std::cin >> b;

        if (a % b)
        {
            int div = a / b + 1;
            std::cout << div * b - a << std::endl;
        }
        else
        {
            std::cout << 0 << std::endl;
        }
    }


    return 0;
}