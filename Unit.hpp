#pragma once
#include <iostream>

struct Location {
	int x;
	int y;
};

class Unit {
public:
	//Konstruktori
	Unit();
	Unit(Location location, int health, int energy, int level, int maxLevel);
	//Metode
	void moveTo(Location location);
	void attack(Location location);
	void upgrade();
	//Destruktor
	~Unit();
protected:
	Location location;
	int health;
	int energy;
	int level;
	int maxLevel;
};