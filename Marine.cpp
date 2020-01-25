#include "Marine.hpp"
#include <iostream>

//Konstruktori
Marine::Marine() : Unit({ 0,0 }, 45, 0, 1, 1) {
	std::cout << "Stvaram Marine jedinicu." << std::endl;
}
Marine::Marine(Location location) : Unit(location, 45, 0, 1, 1) {
	std::cout << "Stvaram Marine jedinicu." << std::endl;
}

//Destruktor
Marine::~Marine() {
	std::cout << "Uništavam Marine jedinicu." << std::endl;
}

void Marine::attack(Location location) {
	Unit::attack(location);
	std::cout << "pew pew" << std::endl;
}

//malomalo