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
        int a, b;
        cin >> a >> b;

        cout << max(pow(min(a, b) * 2, 2), pow(max(a, b), 2)) << endl;
    }

    return 0;
}