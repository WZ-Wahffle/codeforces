//
// Created by mvauderw on 22.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int pow(int a, int b)
{
    int ret = 1;
    while (b--)
    {
        ret *= a;
    }
    return ret;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, biggest, smallest;
        cin >> a >> b >> c;

        biggest = max(a, max(b, c));
        smallest = min(a, min(b, c));

        if (a != biggest && a != smallest) cout << a << endl;
        if (b != biggest && b != smallest) cout << b << endl;
        if (c != biggest && c != smallest) cout << c << endl;
    }

    return 0;
}