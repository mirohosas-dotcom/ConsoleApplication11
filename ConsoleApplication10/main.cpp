#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"

using namespace std;

int main()
{
    system("chcp 65001");
    Dog dog("Рекс", 4, "коричневий", "Вівчарка");
    Cat cat("Мурчик", 3, "білий", "Британська");
    Parrot parrot("Кеша", 2, "зелений", true);

    dog.showDog();

    cout << endl;

    cat.showCat();

    cout << endl;

    parrot.showParrot();
}