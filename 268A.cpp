//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <vector>

int main()
{
    int n, h, a, count = 0;
    std::cin >> n;

    std::vector<int> home, guest;

    for (int i = 0; i < n; i++)
    {
        std::cin >> h >> a;
        home.push_back(h);
        guest.push_back(a);
    }

    for (auto ait: home)
    {
        for (auto ait2: guest)
        {
            if (ait == ait2)
            {
                count++;
            }
        }
    }

    std::cout << count;

    return 0;
}