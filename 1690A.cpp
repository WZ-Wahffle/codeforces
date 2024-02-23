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
        int n, left = 2, middle = 3, right = 1;
        cin >> n;


        if (n % 3 == 0) P(n / 3 << " " << n / 3 + 1 << " " << n / 3 - 1);
        if (n % 3 == 1) P((n - 1) / 3 << " " << 2 + (n - 1) / 3 << " " << (n - 1) / 3 - 1);
        if (n % 3 == 2) P((n - 2) / 3 + 1 << " " << 2 + (n - 2) / 3 << " " << (n - 2) / 3 - 1);


    }
}