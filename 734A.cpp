//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>

int main()
{
    int n, tally = 0;
    std::string s;
    std::cin >> n;
    std::cin >> s;

    for (auto ait: s)
    {
        (ait == 'A') ? tally-- : tally++;
    }

    if (tally > 0) std::cout << "Danik";
    if (tally < 0) std::cout << "Anton";
    if (tally == 0) std::cout << "Friendship";


    return 0;
}
