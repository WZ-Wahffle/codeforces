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
        string s;
        cin >> s;

        if (s.size() % 2 == 0 && s.substr(0, s.size() / 2) == s.substr(s.size() / 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}