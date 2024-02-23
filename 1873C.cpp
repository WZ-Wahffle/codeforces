//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
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
        int n;
        vector<pair<int, int>> v;

        for (int i = 1; i <= 10; i++)
        {
            string temp;
            cin >> temp;

            for (int j = 1; j <= 10; j++)
            {
                if (temp[j - 1] == 'X')
                {
                    v.pb({i, j});
                }
            }
        }

        int score = 0;

        for (const auto &ait: v)
        {
            if (ait.first == 1 || ait.first == 10 || ait.second == 1 || ait.second == 10)
            {
                score++;
            }
            else if (ait.first == 2 || ait.first == 9 || ait.second == 2 || ait.second == 9)
            {
                score += 2;
            }
            else if (ait.first == 3 || ait.first == 8 || ait.second == 3 || ait.second == 8)
            {
                score += 3;
            }
            else if (ait.first == 4 || ait.first == 7 || ait.second == 4 || ait.second == 7)
            {
                score += 4;
            }
            else if (ait.first == 5 || ait.first == 6 || ait.second == 5 || ait.second == 6)
            {
                score += 5;
            }
        }

        P(score);
    }

}