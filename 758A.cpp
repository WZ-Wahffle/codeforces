//
// Created by mvauderw on 22.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, max = 0, count = 0;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp > max) max = temp;
        v.push_back(temp);
    }

    for (auto &ait: v)
    {
        while (ait < max) count++, ait++;
    }

    cout << count;

    return 0;
}