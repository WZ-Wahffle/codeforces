//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            cout << 0;
            continue;
        }
        if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << 1;
            i++;
            continue;
        }
        cout << 2;
        i++;
        continue;
    }

    return 0;
}