//
// Created by mvauderw on 23.02.24.
//

#include <iostream>
#include <string>
#include <cmath>

#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define P(x) cout << x << endl
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
    string s0, sa[5];
    cin >> s0 >> sa[0] >> sa[1] >> sa[2] >> sa[3] >> sa[4];

    bool match = false;
    for (auto ait: sa)
    {
        if (ait[0] == s0[0] || ait[1] == s0[1]) match = true;
    }

    match ? PYES : PNO;
}