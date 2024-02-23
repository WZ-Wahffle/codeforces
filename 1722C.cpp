//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <array>
#include <string>
#include <cmath>
#include <map>

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
        int n, scores[3]{};
        cin >> n;

        vector<vector<string>> v(3);
        map<string, int> m;

        for (int i = 0; i < 3; i++)
        {
            v[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                string temp;
                cin >> temp;
                v[i][j] = temp;
                if (m.find(temp) == m.end())
                {
                    m.insert(pair<string, int>(temp, 1));
                }
                else
                {
                    m.at(temp)++;
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                switch (m.at(v[i][j]))
                {
                    case 1:
                        scores[i] += 3;
                        break;
                    case 2:
                        scores[i]++;
                        break;
                    default:;
                }

            }
        }

        P(scores[0] << " " << scores[1] << " " << scores[2]);
    }
}