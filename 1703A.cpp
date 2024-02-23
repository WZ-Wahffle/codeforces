//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        ((s[0] & 0b11011111) == 89 && (s[1] & 0b11011111) == 69 && (s[2] & 0b11011111) == 83) ? cout << "YES\n" : cout
                << "NO\n";
    }

    return 0;
}