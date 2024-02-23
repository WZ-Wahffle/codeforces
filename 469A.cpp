//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <set>

int main()
{
    int n;
    std::cin >> n;
    std::set<int> levels;

    int temp;
    std::cin >> temp;
    for (int i = 0; i < temp; i++)
    {
        int temp2;
        std::cin >> temp2;
        levels.insert(temp2);
    }

    std::cin >> temp;
    for (int i = 0; i < temp; i++)
    {
        int temp2;
        std::cin >> temp2;
        levels.insert(temp2);
    }

    (n == levels.size()) ? std::cout << "I become the guy." : std::cout << "Oh, my keyboard!";

    return 0;
}