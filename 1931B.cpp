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
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
            v.push_back(temp);
        }

        sum /= n;

        int plus = 0;
        bool valid = true;

        for (const auto &ait: v)
        {
            if (ait >= sum) plus += ait - sum;
            else if (ait + plus >= sum) plus -= sum - ait;
            else
            {
                valid = false;
                break;
            }
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}