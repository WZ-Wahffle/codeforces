//
// Created by mvauderw on 23.02.24.
//

#include <iostream>
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
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b && a >= c)
        {
            PYES;
            cout << a << " " << c << " " << c << endl;
        }
        else if (a == c && a >= b)
        {
            PYES;
            cout << a << " " << b << " " << b << endl;
        }
        else if (b == c && b >= a)
        {
            PYES;
            cout << b << " " << a << " " << a << endl;
        }
        else
            PNO;
    }

}