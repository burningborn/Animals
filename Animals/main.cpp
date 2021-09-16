#include <iostream>
using namespace std;
#include "Pets.h"
#include "Dogs.h"
#include "Cats.h"
#include "Parrots.h"

#define delimiter "\n=================================\n\n"

void main() {

	setlocale(LC_ALL, "Russiun");

	Dogs Alpha("Dog", 9, "Alpha");
	Alpha.displayDogs();
	cout << delimiter;
	Cats Kisa("Cat", 3, "Laska");
	Kisa.displayCat();
	cout << delimiter;
	Parrots Ara("Parrot", 17, "Ara");
	Ara.dispayPar();
}