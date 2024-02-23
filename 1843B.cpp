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
        ll n, sum = 0, count = 0;
        cin >> n;
        vector<ll> v;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp != 0) v.pb(temp);
        }

        if (v.empty())
        {
            count = 0;
            sum = 0;
        }
        else if (v.size() > 1)
        {
            sum += abs(v.at(0));
            for (int i = 1; i < v.size(); i++)
            {
                sum += abs(v.at(i));
                if ((v.at(i) < 0 && v.at(i - 1) > 0) || (v.at(i - 1) < 0 && i == 1))
                {
                    count++;
                }
            }
        }
        else
        {
            sum += abs(v.at(0));
            if (v.at(0) < 0) count++;
        }

        P(sum << " " << count);
    }

}