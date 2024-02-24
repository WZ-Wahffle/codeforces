//
// Created by mvauderw on 24.02.24.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < 2 * n; i++)
        {
            ll temp;
            cin >> temp;
            v.push_back(temp);
        }

        std::sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            cout << v.at(i) << " " << v.at(n + i) << " ";
        }

        cout << endl;
    }
}