//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, passengers = 0, maxpassengers = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        passengers -= temp;
        std::cin >> temp;
        passengers += temp;

        if (passengers > maxpassengers)
        {
            maxpassengers = passengers;
        }
    }

    std::cout << maxpassengers;

    return 0;
}