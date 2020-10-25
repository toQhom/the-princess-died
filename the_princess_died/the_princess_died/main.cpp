#include <iostream>
#include <iomanip>
#include <string>
#include "scenes.h"

using namespace std;

void transition() {

	cout << endl;
	cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
	cout << endl;

}

int main() {
	Scene game;
	bool continueGame, successfulInput;
	string input;

	cout << "Welcome to The Princess Died Game" << endl;
	do {
		cout << endl << "To play this game, type what you want to do and press enter!" << endl;
		cout << "Try it out, type \"Say Hello\"" << endl;
		cout << ">> ";
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
	transition();

	continueGame = game.run_opening();
	/*if (continueGame) {
		continueGame = game.run_farm();
		transition();
	}



	if (continueGame) {
		continueGame = game.run_pirate_ship();
		transition();
	}*/



	if (continueGame) {
		continueGame = game.run_horse_ride();
		transition();
	}/*


	if (continueGame) {
		continueGame = game.run_eels();
		transition();


	}*/
	if (continueGame) {
		continueGame = game.run_cliffs();
		transition();
	}



	/*if (continueGame) {
		continueGame = game.run_poison();
		transition();
	}


	if (continueGame) {
		continueGame = game.run_fire_swamp();
		transition();
	}


	if (continueGame) {
		continueGame = game.run_pit();
		transition();
	}


	if (continueGame) {
		continueGame = game.run_miracle_max();
		transition();
	}


	if (continueGame) {
		continueGame = game.run_gate();
		transition();
	}
	 */

	if (continueGame) {
		continueGame = game.run_castle();
		transition();
	}/*


	if (continueGame) {
		continueGame = game.run_stable();
		transition();
	}*/


	if (continueGame) {
		continueGame = game.run_finale();
		transition();
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