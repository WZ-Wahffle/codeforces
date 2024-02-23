//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <array>
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
        long long a, b, c, aret, bret, cret;
        cin >> a >> b >> c;

        aret = max(b, c) + 1 - a;
        bret = max(a, c) + 1 - b;
        cret = max(a, b) + 1 - c;

        if (aret < 0) aret = 0;
        if (bret < 0) bret = 0;
        if (cret < 0) cret = 0;

        P(aret << " " << bret << " " << cret);
    }
}