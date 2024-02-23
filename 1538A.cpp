//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <array>
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
        int n, maxval = 0, minval = INT_MAX, moves = 0;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp > maxval) maxval = temp;
            if (temp < minval) minval = temp;
            v.pb(temp);
        }

        int input;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == minval || v[n - i - 1] == minval)
            {
                input = minval;
                break;
            }
            if (v[i] == maxval || v[n - i - 1] == maxval)
            {
                input = maxval;
                break;
            }

        }
        while (find(v.begin(), v.end(), input) != v.end())
        {
            if (find(v.begin(), v.end(), input) - v.begin() > v.size() / 2 - 1)
            {
                v.erase(v.end() - 1);
                moves++;
            }
            else
            {
                v.erase(v.begin());
                moves++;
            }
        }
        input == minval ? input = maxval : input = minval;
        while (find(v.begin(), v.end(), input) != v.end())
        {
            if (find(v.begin(), v.end(), input) - v.begin() > v.size() / 2 - 1)
            {
                v.erase(v.end() - 1);
                moves++;
            }
            else
            {
                v.erase(v.begin());
                moves++;
            }
        }

        P(moves);
    }
}