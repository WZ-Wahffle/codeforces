//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <cmath>

int main()
{
    int x1, x2, x3, x4;
    std::cin >> x1 >> x2 >> x3 >> x4;

    int sum = fmax(fmax(x1, x2), fmax(x3, x4));

    for (auto ait: {x1, x2, x3, x4})
    {
        if (sum - ait)
        {
            std::cout << sum - ait << " ";
        }
    }

    return 0;
}