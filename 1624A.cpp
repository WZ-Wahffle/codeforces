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
        int n, smallest = INT_MAX, largest = 0;
        cin >> n;

        while (n--)
        {
            int temp;
            cin >> temp;
            if (temp > largest) largest = temp;
            if (temp < smallest) smallest = temp;
        }
        cout << largest - smallest << endl;
    }

    return 0;
}