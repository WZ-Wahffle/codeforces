//
// Created by mvauderw on 24.02.24.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void)
{
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    cout << (ceil(float(a1 + a2 + a3) / 5.) + ceil(float(b1 + b2 + b3) / 10.) <= n ? "YES" : "NO") << endl;
}