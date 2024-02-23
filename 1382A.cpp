//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <array>
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> vn, vm;
        bool valid = false;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            if (find(vn.begin(), vn.end(), temp) == vn.end())
            {
                vn.pb(temp);
            }
        }
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;

            if (find(vm.begin(), vm.end(), temp) == vm.end())
            {
                vm.pb(temp);
            }
        }

        vn.insert(vn.end(), make_move_iterator(vm.begin()), make_move_iterator(vm.end()));

        sort(vn.begin(), vn.end());

        for (int i = 1; i < vn.size(); i++)
        {
            if (vn.at(i) == vn.at(i - 1))
            {
                valid = true;
                PYES;
                P(1 << " " << vn.at(i));
                break;
            }
        }

        if (!valid) PNO;
    }

}