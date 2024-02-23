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
        int n;
        string s;
        cin >> n >> s;
        bool valid = true;

        while (s.find_first_not_of('0') != string::npos && valid)
        {
            char c = s.at(s.find_first_not_of('0'));
            auto pos = s.find_first_not_of('0');

            while (s.find(c) != string::npos)
            {
                if ((s.find(c) % 2 - pos % 2) != 0)
                {
                    valid = false;
                    break;
                }
                else
                {
                    s[s.find(c)] = '0';
                }
            }

        }

        valid ? PYES : PNO;

    }
}