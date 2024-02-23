//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
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
    int n;
    cin >> n;
    vector<string> v;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        v.pb(temp);
    }

    for (auto &ait: v)
    {
        for (int i = 1; i < ait.size(); i++)
        {
            if (ait[i] == 'O' && ait[i - 1] == 'O' && !found)
            {
                ait[i] = '+';
                ait[i - 1] = '+';
                found = true;
                break;
            }
        }
    }

    if (found)
    {
        PYES;
        for (auto ait: v)
        {
            P(ait);
        }
    }
    else
    {
        PNO;
    }

}