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
        std::string s;
        cin >> s;

        (s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) ? cout << "YES" << endl : cout << "NO" << endl;
    }


    return 0;
}