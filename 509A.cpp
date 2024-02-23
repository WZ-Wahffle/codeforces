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
    int n;
    cin >> n;
    vector<vector<int>> v;

    v.resize(n);
    for (auto &ait: v) ait.resize(n);

    for (int i = 0; i < n; i++)
    {
        v[i][0] = 1;
        v[0][i] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            v[i][j] = v[i - 1][j] + v[i][j - 1];
        }
    }

    P(v[n - 1][n - 1]);

}