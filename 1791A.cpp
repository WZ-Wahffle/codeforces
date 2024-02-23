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
        char c;
        cin >> c;
        bool valid = false;
        for (const auto ait: {99, 111, 100, 101, 102, 114, 115})
        {
            if (ait == c)
            {
                valid = true;
            }
        }
        valid ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}