//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
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
    long long n, cur = 0, max = 0;
    cin >> n;
    vector<long long> v;

    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        v.pb(temp);
    }

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > v[i - 1]) cur++;
        else cur = 0;

        if (cur > max) max = cur;
    }

    P(++max);
    return 0;
}