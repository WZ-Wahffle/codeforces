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
        int n, s, r;
        cin >> n >> s >> r;

        int d = s - r;

        vector<int> v;

        for (; r >= d; r -= d)
            v.push_back(d);
        if (r) v.push_back(r);
        for (int i = 0; i < v.size() && v.size() + 1 < n;)
        {
            if (v.at(i) == 1)
            {
                ++i;
                continue;
            }
            v[i]--;
            v.push_back(1);
        }
        v.push_back(d);

        for (const auto &ait: v) cout << ait << " ";
        cout << endl;
    }
}