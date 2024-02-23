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
        string s;
        cin >> s;
        bool valid = true;

        int i = 26;

        while (s.find(0b1100000 | i) == string::npos) i--;

        for (; i > 0; i--)
        {
            if (!s.empty() && s.back() == (0b1100000 | i))
            {
                s.erase(s.size() - 1, 1);
            }
            else if (!s.empty() && s.front() == (0b1100000 | i))
            {
                s.erase(0, 1);
            }
            else
            {
                valid = false;
                break;
            }
        }

        if (!s.empty()) valid = false;

        valid ? PYES : PNO;
    }
}