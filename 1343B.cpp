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
        vector<int> v;

        if (n % 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (n / 2 > i)
                {
                    v.push_back((i + 1) * 2);
                }
                else
                {
                    if (i != n - 1)
                    {
                        v.push_back((i + 1) * 2 - 1 - n);
                    }
                    else
                    {
                        v.push_back(v[v.size() - 1] + 2 + (n / 4) * 2);
                    }
                }
            }

            cout << "YES" << endl;
            for (auto ait: v)
            {
                cout << ait << " ";
            }
            cout << endl;
        }
    }

    return 0;
}