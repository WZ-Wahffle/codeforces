//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
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
        string s, out;
        cin >> n >> s;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s.back() == '0')
            {
                out = char(atoi(s.substr(s.size() - 3, 2).c_str()) + 96) + out;
                s.pop_back();
                s.pop_back();
                s.pop_back();
                i -= 2;
            }
            else
            {
                out = char(s[s.size() - 1] + 48) + out;
                s.pop_back();
            }
        }

        P(out);
    }

}