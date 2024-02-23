//
// Created by mvauderw on 24.02.24.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char ff = 0;
        bool valid = false;

        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s.at(i) == s.at(s.size() - 1 - i))
            {
                if (ff == 0) ff = s.at(i);
                else if (s.at(i) != ff)
                {
                    valid = true;
                    break;
                }
            }
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}