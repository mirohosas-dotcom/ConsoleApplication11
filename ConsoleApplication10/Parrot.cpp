#include <iostream>
#include "Parrot.h"

using namespace std;

Parrot::Parrot(const char n[], int a, const char c[], bool talk)
    : HomeAnimal(n, a, c)
{
    canTalk = talk;
}

void Parrot::showParrot()
{
    cout << "Папуга" << endl;
    show();

    if (canTalk)
        cout << "Вміє говорити: так" << endl;
    else
        cout << "Вміє говорити: ні" << endl;
}