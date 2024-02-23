//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <array>
#include <cmath>

#define PYES cout << "YES\n"
#define PNO cout << "NO\n"
#define P(x) cout << x << "\n"
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
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        v.resize(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }

        sort(v.begin(), v.end(), [](const pair<int, int> &p1, const pair<int, int> &p2)
        {
            if (p1.first < p2.first) return true;
            else return false;
        });

        for (const auto &ait: v)
        {
            if (ait.first > k) break;
            else k += ait.second;
        }

        P(k);
    }

}