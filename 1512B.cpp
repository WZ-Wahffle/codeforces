//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <array>
#include <string>
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

int BinomialCoefficient(const int n, const int k)
{
    vector<int> solutions(k);
    solutions[0] = n - k + 1;

    for (int i = 1; i < k; ++i)
    {
        solutions[i] = solutions[i - 1] * (n - k + 1 + i) / (i + 1);
    }

    return solutions[k - 1];
}

template<class T>
void swap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
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
        cin >> n;

        vector<string> v(n);
        vector<pair<int, int>> p;

        for (auto &ait: v) cin >> ait;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v.at(i).at(j) == '*') p.pb({i, j});
            }
        }

        p.pb(p.at(0));
        p.pb(p.at(1));

        if (p.at(0).first == p.at(1).first)
        {
            p[2].first = (p[2].first + 1) % n;
            p[3].first = (p[3].first + 1) % n;
        }
        else if (p.at(0).second == p.at(1).second)
        {
            p[2].second = (p[2].second + 1) % n;
            p[3].second = (p[3].second + 1) % n;
        }
        else swap(p[2].first, p[3].first);

        v[p.at(2).first][p.at(2).second] = '*';
        v[p.at(3).first][p.at(3).second] = '*';

        for (const auto &ait: v) P(ait);
    }
}