#pragma once
#include "Pets.h"

class Cats :
    public Pets
{
private:
    string Cat;
public:
    Cats(string Cat, int age, string name) : Cat{ Cat }{
        this->age = age;
        this->name = name;
    }
    ~Cats(){}

    void displayCat();
};

