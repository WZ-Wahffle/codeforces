//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define P(x) cout << x << endl
#define pb push_back

using namespace std;

bool isprime(int x)
{
    if (x == 1 || x == 0) return false;

    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0) return false;
    }

    return true;
}

int Sum(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> candies, oranges;
        long long cmin = LLONG_MAX, omin = LLONG_MAX, moves = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            candies.pb(temp);
            if (temp < cmin) cmin = temp;
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            oranges.pb(temp);
            if (temp < omin) omin = temp;
        }

        for (int i = 0; i < n; i++)
        {
            if (candies[i] > cmin && oranges[i] > omin)
            {
                if (oranges[i] - omin == min(oranges[i] - omin, candies[i] - cmin))
                {
                    const long long diff = oranges[i] - omin;

                    moves += diff;
                    oranges[i] -= diff;
                    candies[i] -= diff;
                }
                else
                {
                    const long long diff = candies[i] - cmin;

                    moves += diff;
                    oranges[i] -= diff;
                    candies[i] -= diff;
                }
            }

            if (candies[i] > cmin)
            {
                moves += (candies[i] - cmin);
                candies[i] -= (candies[i] - cmin);
            }

            if (oranges[i] > omin)
            {
                moves += (oranges[i] - omin);
                oranges[i] -= (oranges[i] - omin);
            }
        }

        P(moves);

    }

    return 0;
}