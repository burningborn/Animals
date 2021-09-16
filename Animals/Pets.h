#pragma once
#include <iostream>
using namespace std;

//template <class T>
class Pets
{
protected:
	string something;
	int age;
	string name;
public:
	Pets(string something, int age, string name) : something{ something }, age { age }, name{ name }{}
	Pets():Pets("undefined", -1, "undefined"){}
	~Pets(){}



	//void vox() = 0;
	void display();
};

