#pragma once
#include "Unit.hpp"

class Ghost : public Unit {
public:
	Ghost();
	Ghost(Location location);
	void attack(Location location);
	~Ghost();
private:
};