//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

#define PYES cout << "YES" << endl
#define PNO cout << "NO" << endl
#define P(x) cout << x << endl

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        (a + b == c) ? P("+") : P("-");
    }

    return 0;
}