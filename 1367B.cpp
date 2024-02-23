//
// Created by mvauderw on 22.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v, problemspots;


        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
            if (v[i] % 2 != i % 2)
            {
                problemspots.push_back(i);
            }
        }

        if (problemspots.size() % 2)
        {
            cout << -1 << endl;
        }
        else
        {
            int parity = 0;

            for (auto ait: problemspots)
            {
                (ait % 2) ? parity++ : parity--;
            }

            if (parity)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << problemspots.size() / 2 << endl;
            }
        }

    }

    return 0;
}