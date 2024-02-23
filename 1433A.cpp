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
        string x;
        unsigned long long index, total = 0;
        cin >> x;
        index = x.size() + 4 * ((x[0] & 0xf) - 1);

        for (int i = 1; i <= index; i++)
        {
            int temp = i;
            while (temp > 4) temp -= 4;
            total += temp % 5;
        }

        cout << total << endl;

    }

    return 0;
}