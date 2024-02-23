//
// Created by mvauderw on 23.02.24.
//

#include <iostream>
#include <string>
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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char d;
        string s;
        cin >> n >> d >> s;

        for (int i = 0; i < n; i++)
        {
            if (s.at(i) < d)
            {
                s.insert(i, {d});
                break;
            }
        }

        if (s.size() == n) s.pb(d);

        P(s);
    }

}