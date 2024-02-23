//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);

        for (auto &ait: v) cin >> ait;

        if (m >= 4)
        {
            int count = 0;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (count == 0 && v.at(j).at(i) == 'v')
                    {
                        count++;
                        break;
                    }
                    if (count == 1 && v.at(j).at(i) == 'i')
                    {
                        count++;
                        break;
                    }
                    if (count == 2 && v.at(j).at(i) == 'k')
                    {
                        count++;
                        break;
                    }
                    if (count == 3 && v.at(j).at(i) == 'a')
                    {
                        count++;
                        break;
                    }
                }
            }

            count == 4 ? PYES : PNO;
        }
        else
            PNO;
    }
}