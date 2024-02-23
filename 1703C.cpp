//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
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
        int n;
        cin >> n;
        vector<int> v1;
        vector<string> v2;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v1.pb(temp);
        }

        for (int i = 0; i < n; i++)
        {
            int dummy;
            string temp;
            cin >> dummy;
            cin >> temp;
            v2.pb(temp);
        }

        for (int i = 0; i < n; i++)
        {
            for (const auto &ait: v2[i])
            {
                if (ait == 'D') v1[i]++;
                if (ait == 'U') v1[i]--;
            }

            while (v1[i] >= 10) v1[i] -= 10;
            while (v1[i] < 0) v1[i] += 10;

            cout << v1[i] << " ";

        }

        cout << endl;

    }
}