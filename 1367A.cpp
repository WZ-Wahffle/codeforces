//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        s = s[0] + s + s[s.size() - 1];

        for (int i = 0; i < s.size(); i += 2)
        {
            cout << s[i];
        }

        cout << endl;
    }

    return 0;
}