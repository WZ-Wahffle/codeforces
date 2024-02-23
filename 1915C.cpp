//
// Created by mvauderw on 23.02.24.
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
        ll n, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            sum += tmp;
        }
        cout << (sqrt(sum) == floor(sqrt(sum)) ? "YES" : "NO") << endl;
    }
}