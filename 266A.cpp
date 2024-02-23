//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    int n, counter = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    for (unsigned int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            counter++;
        }
    }

    std::cout << counter;

    return 0;
}