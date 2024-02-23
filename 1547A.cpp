//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
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
        struct Point
        {
            int x = 0, y = 0;
        };

        Point a, b, f;
        cin >> a.x >> a.y >> b.x >> b.y >> f.x >> f.y;

        auto minmaxX = minmax({a.x, b.x, f.x});
        auto minmaxY = minmax({a.y, b.y, f.y});
        if (a.x == b.x && b.x == f.x && minmaxY.first != f.y && minmaxY.second != f.y)
        {
            P(int(abs(a.y - b.y) +2));
        }
        else if (a.y == b.y && b.y == f.y && minmaxX.first != f.x && minmaxX.second != f.x)
        {
            P(int(abs(a.x - b.x) +2));
        }
        else
        {
            P(int(abs(a.x - b.x) +abs(a.y - b.y)));
        }
    }
}