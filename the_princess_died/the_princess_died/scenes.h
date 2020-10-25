#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cctype>

using namespace std;

const bool CONTINUE = true;

class Scene {
public:
	void getInput();
	bool run_opening();
	bool run_farm();
	bool run_pirate_ship();
	bool run_horse_ride();
	bool run_eels();
	bool run_cliffs();
	bool run_poison();
	bool run_fire_swamp();
	bool run_pit();
	bool run_miracle_max();
	bool run_gate();
	bool run_castle();
	bool run_stable();
	bool run_finale();
	bool run_closing();
private:
	string input;
	bool wait;
	vector<string> responses;
};