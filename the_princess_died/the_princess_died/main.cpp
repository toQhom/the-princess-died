#include <iostream>
#include <iomanip>
#include <string>
#include "scenes.h"

using namespace std;

int main() {
	Scene game;
	bool continueGame, successfulInput;
	string input;

	cout << "Welcome to The Princess Died Game" << endl;
	do {
		cout << endl <<"To play this game, type what you want to do and press enter!" << endl;
		cout << "Try it out, type \"Say Hello\"" << endl;
		getline(cin, input);
		if (input == "Say Hello" || input == "say hello" || input == "Say hello" || input == "say Hello") {
			cout << "Well, hello to you too!" << endl;
			successfulInput = true;
		}
		else {
			cout << "That doesn't sound quite right. Try again!" << endl;
			successfulInput = false;
		}
	} while (!successfulInput);

	cout << "Entering the game. Buckle your seatbelt..." << endl << endl;

	continueGame = game.run_opening();
	/*if (continueGame) {
		continueGame = game.run_farm();
	}
	if (continueGame) {
		continueGame = game.run_pirate_ship();
	}*/
	if (continueGame) {
		continueGame = game.run_horse_ride();
	}
	if (continueGame) {
		continueGame = game.run_eels();
	}
	if (continueGame) {
		continueGame = game.run_cliffs();
	}
	/*if (continueGame) {
		continueGame = game.run_poison();
	}
	if (continueGame) {
		continueGame = game.run_fire_swamp();
	}
	if (continueGame) {
		continueGame = game.run_pit();
	}
	if (continueGame) {
		continueGame = game.run_miracle_max();
	}*/
	if (continueGame) {
		continueGame = game.run_gate();
	}
	if (continueGame) {
		continueGame = game.run_castle();
	}
	if (continueGame) {
		continueGame = game.run_stable();
	}
	if (continueGame) {
		continueGame = game.run_finale();
	}
	if (continueGame) {
		continueGame = game.run_closing();
	}
	if (!continueGame) {
		cout << "You are dead." << endl;
	}

	cout << "The End" << endl;

	return 0;
}
