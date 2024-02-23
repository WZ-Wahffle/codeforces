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
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;

        int ops = 0;

        while (ops < 8)
        {
            if (x.find(s) != string::npos)
            {
                break;
            }
            ops++;
            x += x;
        }

        cout << (x.find(s) != string::npos ? ops : -1) << endl;
    }
}