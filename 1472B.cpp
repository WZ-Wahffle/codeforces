//
// Created by mvauderw on 23.02.24.
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
        int n, one = 0, two = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 1) one++;
            if (temp == 2) two++;
        }

        if ((one + two * 2) % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if ((one + two * 2) % 4 == 0 || one)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

    }

    return 0;
}