#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int ENDGAME = -1;
const int CONTINUE = 0;

class Scene {
public:
	void getInput();
	int run_opening();
	int run_farm();
	int run_pirate_ship();
	int run_horse_ride();
	int run_eels();
	int run_cliffs();
	int run_poison();
	int run_fire_swamp();
	int run_pit();
	int run_miracle_max();
	int run_gate();
	int run_castle();
	int run_stable();
	int run_finale();
	int run_closing();
private:
	string input;
	bool wait;
};