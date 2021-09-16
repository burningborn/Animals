#pragma once
#include "Pets.h"

class Dogs :
    public Pets
{
private:
    string Dog;

public:
    Dogs(string Dog, int age, string name) : Dog{ Dog }{
        this->age = age;
        this->name = name;
    }
    ~Dogs(){}
    
    void displayDogs();
};

