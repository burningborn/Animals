#pragma once
#include "Pets.h"

class Parrots :
    public Pets
{private:
    string Parrot;

public:
    Parrots(string Parrot, int age, string name) : Parrot{ Parrot }{
        this->age = age;
        this->name = name;
    }
    ~Parrots(){}

    void dispayPar();
};

