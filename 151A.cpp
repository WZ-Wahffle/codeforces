//
// Created by mvauderw on 22.02.24.
//

#include <iostream>

using namespace std;

int main()
{
    int people, k, l, c, d, salt, reqVolume, reqSalt, volume, slices, rounds = 0;
    cin >> people >> k >> l >> c >> d >> salt >> reqVolume >> reqSalt;

    volume = k * l;
    slices = c * d;

    while (salt >= reqSalt * people && volume >= reqVolume * people && slices >= people)
    {
        rounds++;
        salt -= reqSalt * people;
        volume -= reqVolume * people;
        slices -= people;
    }

    cout << rounds;

    return 0;
}