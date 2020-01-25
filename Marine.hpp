#pragma once
#include "Unit.hpp"

class Marine : public Unit {
public:
	Marine();
	Marine(Location location);
	void attack(Location location);
	~Marine();
private:
};
