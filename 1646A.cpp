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
        ll n, s;
        cin >> n >> s;

        cout << s / (n * n) << endl;
    }
}