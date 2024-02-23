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
        if (s.size() > 2)
        {
            for (int i = 1; i < s.size() - 1; i++)
            {
                if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's') valid = false;
                if (s[i] == 'Y' && (s[i - 1] != 's' || s[i + 1] != 'e')) valid = false;
                if (s[i] == 'e' && (s[i - 1] != 'Y' || s[i + 1] != 's')) valid = false;
                if (s[i] == 's' && (s[i - 1] != 'e' || s[i + 1] != 'Y')) valid = false;
            }
        }
        if (s.size() == 2)
        {
            if (s[0] != 'Y' && s[0] != 'e' && s[0] != 's') valid = false;
            if (s[0] == 'Y' && s[1] != 'e') valid = false;
            if (s[0] == 'e' && s[1] != 's') valid = false;
            if (s[0] == 's' && s[1] != 'Y') valid = false;
        }
        if (s.size() == 1)
        {
            if (s[0] != 'Y' && s[0] != 'e' && s[0] != 's') valid = false;
        }
        valid ? PYES : PNO;
    }
}