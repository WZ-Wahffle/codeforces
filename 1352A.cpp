//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, lettercount = 0;
        std::cin >> n;
        std::string str = std::to_string(n);

        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] != '0')
            {
                lettercount++;
            }
        }
        std::cout << lettercount << std::endl;

        for (int j = str.size() - 1; j >= 0; j--)
        {
            if (str[j] != '0' || j == 0)
            {
                std::cout << str.substr(j) << " ";
                str[j] = '0';
            }
        }
        std::cout << std::endl;
    }
    return 0;
}