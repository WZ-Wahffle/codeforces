//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    int n, t;
    std::cin >> n;
    std::cin >> t;
    std::string s;
    std::cin >> s;

    for (int i = 0; i < t; i++)
    {
        for (int j = s.size() - 1; j > 0; j--)
        {
            if (s[j - 1] == 'B' && s[j] == 'G')
            {
                s[j - 1] = 'G';
                s[j] = 'B';
                j--;
            }
        }
    }

    std::cout << s;

    return 0;
}