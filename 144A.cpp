//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <vector>

int main()
{
    int n, smallest = 0, largest = 0;
    std::cin >> n;
    std::vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;
        nums.push_back(temp);

        if (nums[i] < nums[smallest] || (nums[i] == nums[smallest] && i > smallest))
        {
            smallest = i;
        }
        if (nums[i] > nums[largest] || (nums[i] == nums[largest] && i < largest))
        {
            largest = i;
        }
    }

    (smallest > largest) ? std::cout << n - (smallest + 1) + largest : std::cout << n - (smallest + 1) + largest - 1;

    return 0;
}