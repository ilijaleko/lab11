#include <iostream>
#include <vector>
#include "Unit.hpp"
#include "Reaper.hpp"
#include "Marine.hpp"
#include "Ghost.hpp"

int main()
{
	Reaper* r1 = new Reaper();
	Reaper* r2 = new Reaper();
	Reaper* r3 = new Reaper();
	Reaper* r4 = new Reaper();
	std::vector<Unit*> marine;
	marine.push_back(r1);
	marine.push_back(r2);
	marine.push_back(r3);
	marine.push_back(r4);

	for (auto jedinica : marine) {
		jedinica->moveTo({ 22,55 });
	}
	for (auto jedinica : marine) {
		jedinica->attack({ 21,4 });
	}
}
