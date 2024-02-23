//
// Created by mvauderw on 23.02.24.
//

#include <bits/stdc++.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

using namespace std;

typedef long long ll;

int main(void)
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ge = 0, le = LONG_LONG_MAX;
        vector<ll> ne;
        cin >> n;

        for (ll i = 0; i < n; i++)
        {
            ll a, x;
            cin >> a >> x;
            switch (a)
            {
                case 1:
                    ge = max(x, ge);
                    break;
                case 2:
                    le = min(x, le);
                    break;
                case 3:
                    ne.push_back(x);
                    break;
            }
        }

        ne.erase(std::remove_if(ne.begin(), ne.end(), [ge, le, ne](ll &i)
        {
            return i < ge || i > le;
        }), ne.end());

        cout << MAX(le - ge + 1 - ne.size(), 0) << endl;
    }
}