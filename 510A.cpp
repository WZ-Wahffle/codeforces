//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

int main()
{
    int n, m, lcount = 0;
    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        if (lcount % 2)
        {
            if ((lcount - 1) % 4)
            {
                std::cout << "#";
                for (int j = 0; j < m - 1; j++)
                {
                    std::cout << ".";
                }
            }
            else
            {
                for (int j = 0; j < m - 1; j++)
                {
                    std::cout << ".";
                }
                std::cout << "#";
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << "#";
            }
        }


        lcount++;
        std::cout << std::endl;
    }


    return 0;
}