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
    while(t--)
    {
        string s;
        cin >> s;

        for (auto y: "12345678")
            for (auto x: "abcdefgh")
            {
                if (s[0] == x ^ s[1] == y && x != 0 && y != 0)
                {
                    cout << x << y << endl;
                }
            }
    }
}