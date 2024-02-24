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
        int n, s = 0;
        cin >> n;

        if (n < 4) s = n - 1;
        else
        {
            if (n % 2 == 0) s = 2;
            else s = 3;
        }

        cout << s << endl;
    }
}