#pragma once
#include "HomeAnimal.h"

class Cat : public HomeAnimal
{
private:
    const char* breed;

public:
    Cat(const char n[], int a, const char c[], const char b[]);

    void showCat();
};