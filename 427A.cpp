//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, officers = 0, tally = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        officers += temp;
        if (temp == -1 && officers < 0)
        {
            tally++;
            officers = 0;
        }
    }

    std::cout << tally;

    return 0;
}