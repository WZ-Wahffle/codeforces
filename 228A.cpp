//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <set>

int main()
{
    std::set<int> nums;

    for (int i = 0; i < 4; i++)
    {
        int temp;
        std::cin >> temp;
        nums.insert(temp);
    }

    std::cout << 4 - nums.size();

    return 0;
}