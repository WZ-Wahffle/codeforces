//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, tally = 0, smallest, largest;
    std::cin >> n;
    std::cin >> smallest;
    largest = smallest;

    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        std::cin >> temp;

        if (temp > largest)
        {
            tally++;
            largest = temp;
        }
        if (temp < smallest)
        {
            tally++;
            smallest = temp;
        }

    }

    std::cout << tally;

    return 0;
}