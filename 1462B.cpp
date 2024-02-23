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
        int n;
        cin >> n >> s;

        if (s.substr(0, 4) == "2020"
            || (s.substr(0, 3) == "202" && s.at(n - 1) == '0')
            || (s.substr(0, 2) == "20" && s.substr(n - 2, 2) == "20")
            || (s.at(0) == '2' && s.substr(n - 3) == "020")
            || s.substr(n - 4, 4) == "2020")
        {
            PYES;
        }
        else
            PNO;
    }

}