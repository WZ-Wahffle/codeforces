//
// Created by mvauderw on 23.02.24.
//

#include <iostream>
#include <cmath>

#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define P(x) cout << (x) << endl
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
        long long a, b;
        cin >> a >> b;

        if (a == b) P(0);

        if (a > b)
        {
            if ((a - b) % 2 == 0) P(1);
            if ((a - b) % 2 == 1) P(2);
        }
        if (a < b)
        {
            if ((b - a) % 2 == 0) P(2);
            if ((b - a) % 2 == 1) P(1);
        }

    }

    return 0;
}