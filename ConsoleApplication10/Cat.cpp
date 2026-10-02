#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(const char n[], int a, const char c[], const char b[])
    : HomeAnimal(n, a, c)
{
    breed = b;
}

void Cat::showCat()
{
    cout << "Кішка" << endl;
    show();
    cout << "Порода: " << breed << endl;
}