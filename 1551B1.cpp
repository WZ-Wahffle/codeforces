//
// Created by mvauderw on 23.02.24.
//

#include <iostream>
#include <array>
#include <string>
#include <cmath>

#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define P(x) cout << x << endl
#define pb push_back
typedef long long ll;
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
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        array<int, 26> a{};

        for (int i = 0; i < s.size(); i++)
        {
            if (a[(s[i] & 31) - 1] < 2)
            {
                a[(s[i] & 31) - 1]++;
            }
        }

        int sum = 0;
        for (auto ait: a)
        {
            sum += ait;
        }
        P(sum / 2);

    }

}