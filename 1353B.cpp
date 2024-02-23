//
// Created by mvauderw on 23.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int pow(int a, int b)
{
    int ret = 1;
    while (b--)
    {
        ret *= a;
    }
    return ret;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a, b;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            b.push_back(temp);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<>());

        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[i])
            {
                const int temp = b[i];
                b[i] = a[i];
                a[i] = temp;
            }
        }

        int sum = 0;
        for (auto ait: a)
        {
            sum += ait;
        }
        cout << sum << endl;
    }

    return 0;
}