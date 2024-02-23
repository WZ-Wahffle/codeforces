//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::string s;

    for (int i = 0; i < n; i++)
    {
        (i % 2) ? s += "I love that " : s += "I hate that ";
    }

    for (int i = 0; i < 5; i++)
    {
        s.pop_back();
    }

    s += "it";
    std::cout << s;

    return 0;
}