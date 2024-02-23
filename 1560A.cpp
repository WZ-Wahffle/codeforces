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
        int n, value = 0;
        cin >> n;

        while (n--)
        {
            do
            {
                value++;
            } while (value % 10 == 3 || value % 3 == 0);
        }
        cout << value << endl;
    }

    return 0;
}