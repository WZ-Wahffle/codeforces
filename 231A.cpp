//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>
#include <cstdio>

int main()
{
    int lines;
    int sureCount = 0;
    std::cin >> lines;

    for (int i = 0; i < lines; i++)
    {
        int i1, i2, i3 = 0;
        scanf_s("%d %d %d", &i1, &i2, &i3);

        if (i1 + i2 + i3 > 1)
        {
            sureCount++;
        }
    }

    std::cout << sureCount;

    return 0;
}