//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <array>
#include <cmath>

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


    int two, three, five, six, sum = 0, tempmin;
    cin >> two >> three >> five >> six;

    tempmin = min(two, min(five, six));

    sum += tempmin * 256;
    two -= tempmin;
    five -= tempmin;
    six -= tempmin;

    tempmin = min(two, three);
    sum += tempmin * 32;
    P(sum);
}