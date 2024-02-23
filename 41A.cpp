//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    std::string s, t;
    std::cin >> s;
    std::cin >> t;

    bool correct = true;

    for (unsigned int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[s.size() - 1 - i])
        {
            correct = false;
            break;
        }
    }

    (correct) ? std::cout << "YES" : std::cout << "NO";

    return 0;
}