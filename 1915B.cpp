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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int ac = 0, bc = 0, cc = 0;

        for(const auto& ait : s1) ait == 'A' ? ac++ : (ait == 'B' ? bc++ : cc++);
        for(const auto& ait : s2) ait == 'A' ? ac++ : (ait == 'B' ? bc++ : cc++);
        for(const auto& ait : s3) ait == 'A' ? ac++ : (ait == 'B' ? bc++ : cc++);

        cout << (ac == 2 ? 'A' : (bc == 2 ? 'B' : 'C')) << endl;
    }
}