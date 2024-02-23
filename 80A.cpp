//
// Created by mvauderw on 22.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
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

int main()
{
    int n, m;
    cin >> n >> m;
    bool valid = 1;

    for (int i = n + 1; i < m; i++)
    {
        if (isprime(i)) valid = false;
    }

    valid && isprime(m) ? PYES : PNO;

    return 0;
}