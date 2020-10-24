#include "scenes.h"
#include <cctype>

void Scene::getInput() {
	getline(cin, input);
	//TODO: switch to lowercase
}

bool Scene::run_opening() {
	//set the scene
	cout << "You wake up. You still feel sick from yesterday." << endl << "You hope your grandfather will get here soon to read you the story again." << endl;
	getInput();

	//makes them wait
	for (int i = 0; i < 5; i++) {
		cout << "Be patient. Stay in bed." << endl;
		getInput();
	}

	//response for waiting
	do {
		cout << endl << "It doesn't look like your grandfather is coming. What do you do?" << endl;
		cout << "You can: \n1) Go back to sleep \n2) Continue waiting \n3) Start reading the book anyways" << endl;
		getInput();

		if (input == "1" || input == "go back to sleep") {
			cout << "You sleep the rest of the day. Enjoy your boring life." << endl;
			return !CONTINUE; //ends the game
		}
		else if (input == "2" || input == "continue waiting") {
			cout << "You wait." << endl;
			wait = true;
		}
		else if (input == "3" || input == "start reading the book anyways") {
			cout << "You open the book and feel air rush around you. The room starts spinning." << endl;
			wait = false;
		}
		else {
			cout << "That response is inconceivable. Try reading your options again. :(" << endl;
			wait = true;
		}
	} while (wait);
	
	return CONTINUE; //continues the game
}

bool Scene::run_farm() {
	return CONTINUE;
}

bool Scene::run_pirate_ship() {
	return CONTINUE;
}

bool Scene::run_horse_ride() {
	return CONTINUE;
}

bool Scene::run_eels() {
	return CONTINUE;
}

bool Scene::run_cliffs() {
	return CONTINUE;
}

bool Scene::run_poison() {
	return CONTINUE;
}

bool Scene::run_fire_swamp() {
	return CONTINUE;
}

bool Scene::run_pit() {
    string input;
    int doorPosition = 0;
    int inigoPosition = 0; 

    srand(time(0));

    while (doorPosition == 0) { // we don't want the door to be where he is!
        doorPosition = rand() % 11 - 5; // set to random number between -5 and 5, positive is right, make sure not equal 0
    }
    cout << "position: " << doorPosition << endl; // DEBUG

    // Storyline
    cout << "This time, you find yourself in a clearing. Soon, two men enter the clearing. You recognize them as Inigo and Fezzik and remember they are looking for the torture chamber. ";
    cout << "Inigo prays and trys to follow his sword. Clearly, it isn't working. You sigh and start to push Inigo towards the secret entrance." << endl;

    // could add a choice here 

    // Instructions
    cout << "To move left type '<' and to move right type '>'. Type more characters afterwards to move farther! (e.g. '>>' moves two right)" << endl;

    while (inigoPosition != doorPosition) {
        cout << "Enter your push!" << endl;
        getline(cin, input);
        if (input.at(0) == '<') {
            cout << "You pushed left!" << endl;
            inigoPosition = inigoPosition - input.length();
        }
        else if (input.at(0) == '>') {
            cout << "You pushed right!" << endl;
            inigoPosition = inigoPosition + input.length();
        }
        else { 
            cout << "That's not a push! Try < or >" << endl;
        }
        cout << "Current Position: " << inigoPosition << endl;
        // Check current position
        if (inigoPosition == doorPosition) {
            cout << "whew, he made it" << endl;
        }
        else if (inigoPosition < doorPosition) {
            cout << "Oh no, the door is to the right!" << endl;
        }
        else {
            cout << "Oh no, the door is to the left!" << endl;
        }
    }
    // TODO: say if he went too far, how far it is
	return CONTINUE;
}

bool Scene::run_miracle_max() {
	return CONTINUE;
}

bool Scene::run_gate() {
	return CONTINUE;
}

bool Scene::run_castle() {
	return CONTINUE;
}

bool Scene::run_stable() {
	return CONTINUE;
}

bool Scene::run_finale() {
	return CONTINUE;
}

bool Scene::run_closing() {
	return CONTINUE;
}
