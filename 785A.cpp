//
// Created by mvauderw on 22.02.24.
//

#include <iostream>
#include <string>
#include <vector>

int main()
{
    int n, count = 0;
    std::cin >> n;
    std::vector<std::string> lines;

    for (int i = 0; i < n; i++)
    {
        std::string temp;
        std::cin >> temp;
        lines.push_back(temp);
    }

    for (auto ait: lines)
    {
        if (ait == "Tetrahedron") count += 4;
        if (ait == "Cube") count += 6;
        if (ait == "Octahedron") count += 8;
        if (ait == "Dodecahedron") count += 12;
        if (ait == "Icosahedron") count += 20;
    }

    std::cout << count;

    return 0;
}