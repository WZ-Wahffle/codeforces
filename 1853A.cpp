//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

#define PYES cout << "YES\n"
#define PNO cout << "NO\n"
#define P(x) cout << x << "\n"
#define NL cout << "\n"
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

int BinomialCoefficient(const int n, const int k)
{
    vector<int> solutions(k);
    solutions[0] = n - k + 1;

    for (int i = 1; i < k; ++i)
    {
        solutions[i] = solutions[i - 1] * (n - k + 1 + i) / (i + 1);
    }

    return solutions[k - 1];
}

template<class T>
void swap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;

    while (t--)
    {
        int n, mingap = INT_MAX;
        cin >> n;

        vector<int> a(n);
        for (auto &ait: a) cin >> ait;

        bool sorted = true;
        for (int i = 1; i < n; i++)
        {
            if (a.at(i - 1) > a.at(i)) sorted = false;
            if (a.at(i) - a.at(i - 1) < mingap && a.at(i) - a.at(i - 1) >= 0) mingap = a.at(i) - a.at(i - 1);
        }

        if (sorted)
        {
            int out = 0;

            while (mingap >= 0) mingap -= 2, out++;

            P(out);
        }
        else
            P(0);
    }
}