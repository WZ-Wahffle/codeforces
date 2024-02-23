//
// Created by mvauderw on 23.02.24.
//

#include <iostream>
#include <string>
#include <cmath>

#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define P(x) cout << (x) << endl
#define pb push_back

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

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, pts = 0;
        cin >> n;
        string s;
        cin >> s;
        bool picked[27]{false};

        for (auto ait: s)
        {
            if (ait)
            {
                picked[ait & 0b11111] ? pts++ : pts += 2, picked[ait & 0b11111] = true;
            }
        }
        P(pts);
    }

    return 0;
}