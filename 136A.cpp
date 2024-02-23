//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        nums.push_back(temp);
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            {
                std::cout << j + 1 << " ";
            }
        }
    }

    return 0;
}