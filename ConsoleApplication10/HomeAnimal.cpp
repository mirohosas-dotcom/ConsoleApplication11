#include <iostream>
#include "HomeAnimal.h"

using namespace std;

HomeAnimal::HomeAnimal(const char n[], int a, const char c[])
{
    name = n;
    age = a;
    color = c;
}

void HomeAnimal::show()
{
    cout << "Ім'я: " << name << endl;
    cout << "Вік: " << age << endl;
    cout << "Колір: " << color << endl;
}