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
        int n;
        string a, b, c;
        cin >> n >> a >> b >> c;

        bool valid = false;

        for (int i = 0; i < n; i++)
        {
            if (a.at(i) != c.at(i) && b.at(i) != c.at(i))
            {
                valid = true;
                break;
            }
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}