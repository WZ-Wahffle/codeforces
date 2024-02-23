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

long long *minR(long long *i1, long long *i2)
{
    if (*i1 > *i2)
    {
        return i2;
    }
    else
    {
        return i1;
    }
}

int main()
{
    string str;
    cin >> str;
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != 'Q' && str[i] != 'A') str.erase(i, 1);
    }

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i + 1; j < str.size(); j++)
        {
            for (int k = j + 1; k < str.size(); k++)
            {
                if (str.at(i) == 'Q' && str.at(j) == 'A' && str.at(k) == 'Q') count++;
            }
        }
    }

    P(count);
}