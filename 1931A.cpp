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
        int n;
        cin >> n;

        if(n <= 28)
        {
            cout << "aa" << char('a' + (n - 3)) << endl;
        }
        else if(n <= 53)
        {
            cout << "a" << char('a' + (n - 28)) << "z" << endl;
        }
        else
        {
            cout << char('a' + (n - 53)) << "zz" << endl;
        }
    }
}