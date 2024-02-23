//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>

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
    bool bw = true;

    for (int i = 0; i < n * m; i++)
    {
        char temp;
        cin >> temp;

        if (temp != 'B' && temp != 'W' && temp != 'G') bw = false;
    }

    bw ? P("#Black&White") : P("#Color");

    return 0;
}