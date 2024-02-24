//
// Created by mvauderw on 24.02.24.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void)
{
    int n;
    cin >> n;

    int a = 1;

    for (int i = 1; i < n; i++)
    {
        a += 4 * i;
    }

    cout << a << endl;
}