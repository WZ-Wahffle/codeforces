//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

using namespace std;

int main()
{
    int a0, a1, a2, a3, cals = 0;
    cin >> a0 >> a1 >> a2 >> a3;
    string s;
    cin >> s;

    for (auto ait: s)
    {
        if (ait == '1') cals += a0;
        if (ait == '2') cals += a1;
        if (ait == '3') cals += a2;
        if (ait == '4') cals += a3;
    }

    cout << cals;

    return 0;
}