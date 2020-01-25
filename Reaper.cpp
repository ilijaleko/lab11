#include "Reaper.hpp"
#include <iostream>

//Konstruktori
Reaper::Reaper() : Unit({ 0,0 }, 60, 0, 1, 3) {
	std::cout << "Stvaram Reaper jedinicu." << std::endl;
}
Reaper::Reaper(Location location) : Unit(location, 60, 0, 1, 3) {
	std::cout << "Stvaram Reaper jedinicu." << std::endl;
}

//Destruktor
Reaper::~Reaper() {
	std::cout << "Uništavam Reaper jedinicu." << std::endl;
}

void Reaper::attack(Location location) {
	Unit::attack(location);
	std::cout << "boom boom" << std::endl;
}