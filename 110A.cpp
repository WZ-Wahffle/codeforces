//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    std::string n;
    std::cin >> n;
    int count = 0;

    for (auto ait: n)
    {
        if (ait == '4' || ait == '7')
        {
            count++;
        }
    }

    (count == 4 || count == 7) ? std::cout << "YES" : std::cout << "NO";

    return 0;
}