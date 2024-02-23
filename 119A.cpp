//
// Created by mvauderw on 23.02.24.
//

#include <iostream>
#include <cmath>
#include <numeric>

#define PYES cout << "YES\n"
#define PNO cout << "NO\n"
#define P(x) cout << x << "\n"
#define pb push_back
using ll = long long;
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
    return i1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n;

    cin >> a >> b >> n;

    while (1)
    {
        if (n >= gcd(a, n))
        {
            n -= gcd(a, n);
        }
        else
        {
            P(1);
            break;
        }

        if (n >= gcd(b, n))
        {
            n -= gcd(b, n);
        }
        else
        {
            P(0);
            break;
        }
    }
}