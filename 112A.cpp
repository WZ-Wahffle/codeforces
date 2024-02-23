//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    std::string s1, s2;
    std::cin >> s1;
    std::cin >> s2;

    int v1 = 0, v2 = 0;

    for (unsigned int i = 0; i < s1.size(); i++)
    {
        v1 += s1[i] & 0b1011111;
        v2 += s2[i] & 0b1011111;

        if (v1 != v2)
        {
            break;
        }
    }

    if (v1 == v2)
    {
        std::cout << 0;
    }

    if (v1 > v2)
    {
        std::cout << 1;
    }

    if (v1 < v2)
    {
        std::cout << -1;
    }

    return 0;
}