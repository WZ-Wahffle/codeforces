//
// Created by mvauderw on 22.02.24.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, s1 = 0, s2 = 0;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    bool s1ToMove = true;
    while (!v.empty())
    {
        if (s1ToMove)
        {
            (v[0] > v[v.size() - 1]) ? (s1 += v[0], v.erase(v.begin())) : (s1 += v[v.size() - 1], v.erase(v.end() - 1));
        }
        else
        {
            (v[0] > v[v.size() - 1]) ? (s2 += v[0], v.erase(v.begin())) : (s2 += v[v.size() - 1], v.erase(v.end() - 1));

        }

        s1ToMove ^= 1;
    }

    std::cout << s1 << " " << s2;

    return 0;
}