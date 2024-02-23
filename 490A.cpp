//
// Created by mvauderw on 22.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, c1 = 0, c2 = 0, c3 = 0;
    vector<int> v1, v2, v3;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp == 1) c1++, v1.push_back(i + 1);
        if (temp == 2) c2++, v2.push_back(i + 1);
        if (temp == 3) c3++, v3.push_back(i + 1);
    }

    cout << min(c1, min(c2, c3)) << endl;

    for (int i = 0; i < min(c1, min(c2, c3)); i++)
    {
        std::cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }

    return 0;
}