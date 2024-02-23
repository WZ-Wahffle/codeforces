//
// Created by mvauderw on 22.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;

    if (max(w, y) == 6) cout << "1/6";
    if (max(w, y) == 5) cout << "1/3";
    if (max(w, y) == 4) cout << "1/2";
    if (max(w, y) == 3) cout << "2/3";
    if (max(w, y) == 2) cout << "5/6";
    if (max(w, y) == 1) cout << "1/1";

    return 0;
}