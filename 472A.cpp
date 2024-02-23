//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2)
    {
        cout << n - 9 << " " << 9;
    }
    else
    {
        cout << n - 4 << " " << 4;
    }

    return 0;
}