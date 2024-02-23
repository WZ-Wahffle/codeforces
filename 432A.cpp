//
// Created by mvauderw on 22.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp <= 5 - k)
        {
            v.push_back(temp);
        }
    }

    cout << floor(v.size() / 3.);

    return 0;
}