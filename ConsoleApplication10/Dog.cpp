#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog(const char n[], int a, const char c[], const char b[])
    : HomeAnimal(n, a, c)
{
    breed = b;
}

void Dog::showDog()
{
    cout << "Собака" << endl;
    show();
    cout << "Порода: " << breed << endl;
}