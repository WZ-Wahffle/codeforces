//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <cmath>

int median(int i1, int i2, int i3)
{
    if ((i1 > i2 && i1 < i3) || (i1 < i2 && i1 > i3)) return i1;
    if ((i2 > i1 && i2 < i3) || (i2 < i1 && i2 > i3)) return i2;

    return i3;
}

int main()
{
    int i1, i2, i3;
    std::cin >> i1 >> i2 >> i3;

    std::cout << abs(i1 - median(i1, i2, i3)) + abs(i2 - median(i1, i2, i3)) + abs(i3 - median(i1, i2, i3));

    return 0;
}