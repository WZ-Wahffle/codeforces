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
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;

        for (auto ait: {b, c, d})
        {
            if (ait > a)
            {
                count++;
            }
        }

        cout << count << endl;

    }

    return 0;
}