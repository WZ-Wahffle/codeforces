//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <array>
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
        int n;
        cin >> n;
        vector<int> one, two, both;

        for (int i = 0; i < n; i++)
        {
            int temp;
            string s;
            cin >> temp >> s;

            if (s == "00") continue;
            if (s == "01") one.pb(temp);
            if (s == "10") two.pb(temp);
            if (s == "11") both.pb(temp);
        }

        sort(one.begin(), one.end());
        sort(two.begin(), two.end());
        sort(both.begin(), both.end());

        if (both.empty() && (one.empty() || two.empty()))
        {
            P(-1);
        }
        else if (both.empty() && !one.empty() && !two.empty())
        {
            P(one.at(0) + two.at(0));
        }
        else if (!both.empty() && (one.empty() || two.empty()))
        {
            P(both.at(0));
        }
        else
        {
            P(min(both.at(0), one.at(0) + two.at(0)));
        }
    }
}