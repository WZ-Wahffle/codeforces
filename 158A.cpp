//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    int n, k, lowest, passed = 0;
    std::cin >> n;
    std::cin >> k;

    int *nums = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    lowest = nums[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= lowest && nums[i] > 0)
        {
            passed++;
        }
        else
        {
            break;
        }
    }

    std::cout << passed;

    delete[] nums;

    return 0;
}