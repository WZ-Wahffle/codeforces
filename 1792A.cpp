//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
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
        int n, count = 0, killed = 0;
        cin >> n;
        vector<int> v(n);

        for (auto &ait: v) cin >> ait;

        sort(v.begin(), v.end());

        for (int i = 1; i < n; i++)
        {
            if (v.at(i) == v.at(i - 1) && v.at(i) != 0 && v.at(i) < 3)
            {
                count += v.at(i);
                v[i] = 0;
                v[i - 1] = 0;
                killed += 2;
            }
        }

        P(count + n - killed);
    }

}