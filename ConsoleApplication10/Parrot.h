#pragma once
#include "HomeAnimal.h"

class Parrot : public HomeAnimal
{
private:
    bool canTalk;

public:
    Parrot(const char n[], int a, const char c[], bool talk);

    void showParrot();
};