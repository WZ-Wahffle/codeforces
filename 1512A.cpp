//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, correct;
        cin >> n;
        vector<int> v;


        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        (v[0] == v[1]) ? correct = v[0] : correct = v[2];

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != correct)
            {
                cout << i + 1;
                break;
            }
        }

        cout << endl;
    }

    return 0;
}