//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>

#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define P(x) cout << x << endl
#define pb push_back

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;

        while (n--)
        {
            int temp;
            cin >> temp;
            v.pb(temp);
        }

        sort(v.begin(), v.end());

        int smallest = INT_MAX;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] - v[i - 1] < smallest)
            {
                smallest = v[i] - v[i - 1];
            }
        }

        P(smallest);
    }

    return 0;
}