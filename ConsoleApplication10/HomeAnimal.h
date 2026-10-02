#pragma once
class HomeAnimal
{
protected:
    const char* name;
    int age;
    const char* color;

public:
    HomeAnimal(const char n[], int a, const char c[]);

    void show();
};