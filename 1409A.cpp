//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << (long long) ceil(abs(a - b) / 10.) << endl;
    }
    return 0;
}