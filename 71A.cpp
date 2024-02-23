//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int lines;
    std::cin >> lines;

    for (unsigned int i = 0; i < lines; i++)
    {
        std::string in;
        std::cin >> in;

        if (in.size() > 10)
        {
            std::string newIn;
            newIn += in.at(0);
            newIn += std::to_string(in.size() - 2);
            newIn += in.at(in.size() - 1);

            in = newIn;
        }
        std::cout << in << std::endl;
    }

    return 0;
}