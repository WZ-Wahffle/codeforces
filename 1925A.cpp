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
        int n, k;
        cin >> n >> k;
        string s;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                s += (j + 'a');
            }
        }
        cout << s << endl;
    }
}