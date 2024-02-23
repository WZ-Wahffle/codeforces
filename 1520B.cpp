//
// Created by mvauderw on 23.02.24.
//

#include <iostream>
#include <string>
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
    int t;
    cin >> t;

    while (t--)
    {
        long long n, lookup[]{11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111};
        cin >> n;

        if (n < 10)
        {
            P(n);
        }
        else
        {
            string s = to_string(n);
            int count = 9;

            for (int i = 0; i < s.size() - 1; i++)
            {

                for (int j = 1; j < 10; j++)
                {
                    if (n >= j * lookup[i]) count++;
                }

            }

            P(count);
        }

    }

    return 0;
}