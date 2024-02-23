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
        int n;
        cin >> n;
        vector<int> v;

        for(int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        std::sort(v.begin(), v.end());
        ll sum = 0;

        for(int i = v.size() - 1; i > 0; i--)
        {
            sum += v.at(i) - v.at(i - 1);
        }

        cout << sum << endl;
    }
}