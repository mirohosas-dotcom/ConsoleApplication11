#pragma once
#include "HomeAnimal.h"

class Dog : public HomeAnimal
{
private:
    const char* breed;

public:
    Dog(const char n[], int a, const char c[], const char b[]);

    void showDog();
};