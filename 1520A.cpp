//
// Created by mvauderw on 22.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        bool valid = true;

        string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", s2;
        cin >> s2;

        for (int i = 1; i < n; i++)
        {
            if (s2[i] != s2[i - 1])
            {
                if (s[s2[i - 1] & 0b11111] == '!')
                {
                    valid = false;
                    break;
                }
                s[s2[i - 1] & 0b11111] = '!';
            }
        }

        if (s[s2[n - 1] & 0b11111] == '!')
        {
            valid = false;
        }

        valid ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}