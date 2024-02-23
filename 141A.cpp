//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;
    bool valid = true;

    s1 += s2;

    for (int i = 0; i < s1.size(); i++)
    {
        int oldSize = s3.size();
        try
        {
            s3.erase(s3.find(s1[i]), 1);
            if (oldSize == s3.size())
            {
                valid = false;
                break;
            }
        }
        catch (std::exception &)
        {
            valid = false;
        }
    }

    valid && s3.empty() ? std::cout << "YES" : std::cout << "NO";

    return 0;
}