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
    int n;
    cin >> n;

    if (n % 2)
    {
        P((n - 1) / 2);
        for (int i = 0; i < (n - 1) / 2 - 1; i++) cout << 2 << " ";
        cout << 3;
    }
    else
    {
        P(n / 2);
        for (int i = 0; i < n / 2; i++) cout << 2 << " ";
    }

    cout << endl;

    return 0;
}