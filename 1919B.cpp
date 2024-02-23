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
        int n, p = 0, m = 0;
        string s;
        cin >> n >> s;
        for (const auto &ait: s) ait == '+' ? p++ : m++;

        cout << abs(p - m) << endl;
    }
}