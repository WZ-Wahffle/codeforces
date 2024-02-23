//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    int c1 = 0, c2 = 0, c3 = 0;

    for (auto ait: s)
    {
        switch (ait)
        {
            case '1':
            {
                c1++;
                break;
            }
            case '2':
            {
                c2++;
                break;
            }
            case '3':
            {
                c3++;
                break;
            }
            default:;
        }
    }

    std::string out;


    while (c1--) out += "1+";
    while (c2--) out += "2+";
    while (c3--) out += "3+";

    out.pop_back();
    std::cout << out;

    return 0;
}