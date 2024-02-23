//
// Created by mvauderw on 24.02.24.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void)
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    auto p = minmax_element(v.begin(), v.end());
    cout << (*p.second - *p.first + 1 - n) << endl;
}