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
        n % 2 ? cout << (n - 1) / 2 << endl : cout << n / 2 << endl;
    }

    return 0;
}