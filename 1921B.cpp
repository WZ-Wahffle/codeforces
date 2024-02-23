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
        string s1, s2;
        cin >> n >> s1 >> s2;
        int movefrom = 0, moveto = 0;

        for(int i = 0; i < n; i++)
        {
            if(s1[i] == '1' && s2[i] == '0') movefrom++;
            if(s1[i] == '0' && s2[i] == '1') moveto++;
        }

        cout << max(movefrom, moveto) << endl;
    }
}