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
        int a, b, c;
        cin >> a >> b >> c;

        (a + b == c || a + c == b || b + c == a) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}