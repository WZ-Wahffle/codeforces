//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
    int t;
    std::cin >> t;
    bool valid = true;

    while (t--)
    {
        int n, arr[50]{0}, arr2[50]{0};
        std::cin >> n;

        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }
        std::sort(arr, arr + n);

        for (int i = 1; i < n; i++)
        {
            arr2[i - 1] = abs(arr[i] - arr[i - 1]);
        }

        std::sort(arr2, arr2 + n - 1, std::greater<>());
        (arr2[0] > 1) ? std::cout << "NO" : std::cout << "YES";

        std::cout << std::endl;
    }

    return 0;
}