#pragma once
#include "Unit.hpp"

class Reaper : public Unit {
public:
	Reaper();
	Reaper(Location location);
	void attack(Location location);
	~Reaper();
private:
};