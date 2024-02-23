//
// Created by mvauderw on 23.02.24.
//

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

int &minR(int &i1, int &i2)
{
    if (i1 > i2)
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
    int n, m, k;
    cin >> n >> m >> k;
    (n <= m && n <= k) ? PYES : PNO;
}