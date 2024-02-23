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
        string s;
        cin >> n >> s;

        array<int, 26> a;
        for(auto& ait : a) ait = 0;

        for(const auto& ait : s) a[toupper(ait) - 'A']++;

        int solved = 0;
        for(int i = 0; i < 26; i++) if(a[i] > i) solved++;

        cout << solved << endl;
    }
}