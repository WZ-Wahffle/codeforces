//
// Created by mvauderw on 22.02.24.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (auto &ait: s) ait |= 32;

    s.erase(std::remove_if(s.begin(), s.end(), [&](const auto &item)
    {
        for(auto ait : "aeiouy") if(ait == item) return true;
        return false;
    }), s.end());

    int si = s.size() * 2;
    for(int i = 0; i < si; i += 2)
    {
        s.insert(s.begin() + i, '.');
    }

    cout << s;

}