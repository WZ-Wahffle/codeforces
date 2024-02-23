//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
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
    int t;
    cin >> t;

    while (t--)
    {
        string keyboard, str;
        cin >> keyboard >> str;

        int count = 0;
        char current = str[0];

        for (auto ait: str)
        {
            count += abs(int(keyboard.find(ait) - keyboard.find(current)));
            current = ait;
        }

        P(count);
    }
}