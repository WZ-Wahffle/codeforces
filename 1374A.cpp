//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, n, out;
        cin >> x >> y >> n;

        out = n - n % x + y;

        while (out > n) out -= x;

        cout << out << endl;
    }


    return 0;
}