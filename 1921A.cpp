//
// Created by mvauderw on 23.02.24.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        array<ll, 4> x, y;
        ll xmin = INT_MAX, xmax = INT_MIN;
        for(int i = 0; i < 4; i++) cin >> x[i] >> y[i];
        for(const auto& ait : x)
        {
            if(ait > xmax) xmax = ait;
            if(ait < xmin) xmin = ait;
        }
        cout << (ll)pow(xmin - xmax, 2) << endl;
    }
}