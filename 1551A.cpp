//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

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
        int n;
        cin >> n;

        if (n % 3 == 0) cout << n / 3 << " " << n / 3 << endl;
        if (n % 3 == 1) cout << (n - 1) / 3 + 1 << " " << (n - 1) / 3 << endl;
        if (n % 3 == 2) cout << (n - 2) / 3 << " " << (n - 2) / 3 + 1 << endl;
    }

    return 0;
}