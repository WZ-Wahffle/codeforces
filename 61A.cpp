//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    std::string s1, s2, sRet;

    std::cin >> s1;
    std::cin >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        (s1[i] == s2[i]) ? sRet += "0" : sRet += "1";
    }

    std::cout << sRet;

    return 0;
}