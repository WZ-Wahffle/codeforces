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
        ll n, k;
        cin >> n >> k;

        cout << (n % 2 == 0 ? "YES" : ((n - k) % 2 == 0 ? "YES" : "NO")) << endl;
    }
}