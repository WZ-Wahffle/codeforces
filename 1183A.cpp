//
// Created by mvauderw on 24.02.24.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int crosssum(int i)
{
    int ret = 0;
    auto s = to_string(i);
    for (const auto &ait: s) ret += ait - '0';
    return ret;
}

int main(void)
{
    int a;
    cin >> a;

    while (crosssum(a) % 4 != 0) a++;

    cout << a << endl;
}