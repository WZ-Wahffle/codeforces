//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>
#include <set>

int main()
{
    int n, count = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::set<int> chars;

    for (int i = 0; i < n; i++)
    {
        if (chars.insert(s[i] & 0b11011111).second) count++;
    }

    (count == 26) ? std::cout << "YES" : std::cout << "NO";

    return 0;
}