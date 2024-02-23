//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

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

long long *minR(long long *i1, long long *i2)
{
    if (*i1 > *i2)
    {
        return i2;
    }
    else
    {
        return i1;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, max = 0, max2 = 0;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.pb(temp);

            if (temp > max)
            {
                if (max > max2) max2 = max;
                max = temp;
            }
            else if (temp > max2) max2 = temp;
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == max) cout << v[i] - max2 << " ";
            else cout << v[i] - max << " ";
        }

        cout << endl;

    }
}