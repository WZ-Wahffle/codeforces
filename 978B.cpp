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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> xcounts;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            xcounts.pb(1);
            while (s[i + 1] == 'x')
            {
                xcounts[xcounts.size() - 1]++;
                i++;
            }
        }
    }

    int count = 0;
    for (auto &ait: xcounts)
    {
        if (ait > 2)
        {
            count += (ait - 2);
        }
    }
    P(count);
}