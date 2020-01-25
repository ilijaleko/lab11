#include "Unit.hpp"
#include <iostream>

//Konstruktori
Unit::Unit():location({0,0}), health(0), energy(0), level(0), maxLevel(0) {}
Unit::Unit(Location location, int health, int energy, int level, int maxLevel): location(location), health(health), energy(energy), level(level), maxLevel(maxLevel){}

//Destruktor
Unit::~Unit() {
	std::cout << "Uništavam jedinicu na koordinatama: " << location.x << ", " << location.y << std::endl;
}

void Unit::moveTo(Location location) {
	this->location.x = location.x;
	this->location.y = location.y;
}

void Unit::attack(Location location) {
	std::cout << "Napadam koordinate: " << location.x << ", " << location.y << std::endl;
}

void Unit::upgrade() {
	if (level < maxLevel) {
		level++;
	}
}