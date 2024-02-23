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
        int n, k;
        cin >> n >> k;

        vector<int> v;

        for(int i = 0; i < n; i++) v.push_back(i + 1);

        reverse(v.begin() + k, v.end());

        for(const auto& ait : v) cout << ait << " ";
        cout << endl;
    }
}