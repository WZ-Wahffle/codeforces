//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    std::string y;
    std::cin >> y;

    while (true)
    {
        y = std::to_string(atoi(y.c_str()) + 1);

        if (y[0] != y[1] && y[0] != y[2] && y[0] != y[3] && y[1] != y[2] && y[1] != y[3] && y[2] != y[3])
        {
            break;
        }
    }

    std::cout << y;

    return 0;
}