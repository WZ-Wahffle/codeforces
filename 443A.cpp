//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <set>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    s.erase(remove(s.begin(), s.end(), '}'), s.end());
    s.erase(remove(s.begin(), s.end(), '{'), s.end());
    s.erase(remove(s.begin(), s.end(), ','), s.end());

    std::set<char> chars;

    for (auto ait: s)
    {
        chars.insert(ait);
    }

    std::cout << chars.size();

    return 0;
}