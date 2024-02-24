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
        int n;
        cin >> n;

        if (n < 7 || n == 9) cout << "NO" << endl;
        else
        {
            if (n % 3 == 0) cout << "YES\n1 4 " << n - 5 << endl;
            if (n % 3 == 1) cout << "YES\n1 2 " << n - 3 << endl;
            if (n % 3 == 2) cout << "YES\n1 2 " << n - 3 << endl;
        }
    }
}