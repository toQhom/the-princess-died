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
	if (continueGame) {
		cout << "I will run the next scene." << endl; //TEST TO DELETE
	}
	else {
		cout << "You are dead." << endl;
	}


	return 0;
}