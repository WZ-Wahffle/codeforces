//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

using namespace std;

int main()
{
    int n, c1 = 0, c2 = 0;
    cin >> n;

    while (n--)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;

        if (temp1 > temp2) c1++;
        if (temp1 < temp2) c2++;

    }

    if (c1 > c2) cout << "Mishka";
    if (c1 < c2) cout << "Chris";
    if (c1 == c2) cout << "Friendship is magic!^^";

    return 0;
}