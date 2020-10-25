#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "scenes.h"

using namespace std;

void transition() {

	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;

}

int main() {
	Scene game;
	bool continueGame, successfulInput, playOn;
	string input;

	do {
		system("CLS");
		cout <<  "Welcome to The Princess Died Game" << endl;
		do {
			cout << endl << "To play this game, type what you want to do and press enter!" << endl;
			cout << "Try it out, type \"Say Hello\"" << endl;
			cout << ">> ";
			getline(cin, input);
			if (input == "Say Hello" || input == "say hello" || input == "Say hello" || input == "say Hello" || input == "b") { //DEBUG
				cout << "Well, hello to you too!" << endl;
				successfulInput = true;
			}
			else {
				cout << "That doesn't sound quite right. Try again!" << endl;
				successfulInput = false;
			}
		} while (!successfulInput);


		cout << "Entering the game. Buckle your seatbelt..." << endl << endl;

		continueGame = game.run_opening(); //The Opening
		transition();
		/*
		if (continueGame) { //The Farm
			continueGame = game.run_farm();
			transition();
		}
		
		if (continueGame) { //The Pirate Ship
			continueGame = game.run_pirate_ship();
			transition();
		}
		
		if (continueGame) { //The Horse Ride Maze
			continueGame = game.run_horse_ride();
			transition();
		}
		
		if (continueGame) { //The Eels
			continueGame = game.run_eels();
			transition();
		}
		*/
		if (continueGame) { //The Cliffs of Insanity
			continueGame = game.run_cliffs();
			transition();
		}

		if (continueGame) { //The Battle of the Wits
			continueGame = game.run_poison();
			transition();
		}

		if (continueGame) { //The Fire Swamp
			continueGame = game.run_fire_swamp();
			transition();
		}

		if (continueGame) { //The Pit of Despain
			continueGame = game.run_pit();
			transition();
		}

		if (continueGame) { //Miracle Max's Hut
			continueGame = game.run_miracle_max();
			transition();
		}

		if (continueGame) { //The Castle Gate
			continueGame = game.run_gate();
			transition();
		}

		if (continueGame) { //The Castle Maze
			continueGame = game.run_castle();
			transition();
		}

		if (continueGame) { //The Stable
			continueGame = game.run_stable();
			transition();
		}

		if (continueGame) { //The Finale
			continueGame = game.run_finale();
			transition();
		}

		if (continueGame) { //The Closing
			continueGame = game.run_closing();
			transition();
		}

		cout << "The End" << endl << endl;

		do {
			cout << "Would you like to play again? (yes/no)" << endl;
			cout << ">> ";
			getline(cin, input);
			if (input == "yes" || input == "YES" || input == "Yes" || input == "y" || input == "Y") {
				playOn = true;
				successfulInput = true;
			}
			else if (input == "no" || input == "NO" || input == "No" || input == "n" || input == "N") {
				playOn = false;
				successfulInput = true;
			}
			else {
				cout << "I don't know what that means. Please try again." << endl << endl;
				successfulInput = false;
			}
		} while (!successfulInput);

	} while (playOn);

	return 0;
}