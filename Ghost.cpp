#include "Ghost.hpp"
#include <iostream>

//Konstruktori
Ghost::Ghost() : Unit({ 0,0 }, 60, 200, 1, 5) {
	std::cout << "Stvaram Ghost jedinicu." << std::endl;
}
Ghost::Ghost(Location location) : Unit(location, 60, 200, 1, 5) {
	std::cout << "Stvaram Ghost jedinicu." << std::endl;
}

//Destruktor
Ghost::~Ghost() {
	std::cout << "Uništavam Ghost jedinicu." << std::endl;
}

void Ghost::attack(Location location) {
	if (energy >= 50) {
		Unit::attack(location);
		energy = energy - 50;
		std::cout << "pew pew" << std::endl;
	}
	else {
		std::cout << "low energy" << std::endl;
	}
}