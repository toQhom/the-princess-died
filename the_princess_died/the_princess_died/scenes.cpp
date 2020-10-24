#include "scenes.h"
#include <cctype>

void Scene::getInput() {
	getline(cin, input);
	//TODO: switch to lowercase
}

int Scene::run_opening() {
	cout << "You wake up. You still feel sick from yesterday." << endl << "You hope your grandfather will get there soon to read you the story again." << endl;
	getInput();

	for (int i = 0; i < 5; i++) {
		cout << "You wait.";
		getInput();
	}

	do {
		cout << "It doesn't look like your grandfather is coming. What do you do?" << endl;
		cout << "You can: \n1) Go back to sleep \n2) Continue waiting \n3)Start reading the book anyways" << endl;
		getInput();

		if (input == "1" || input == "go back to sleep") {
			cout << "You sleep the rest of the day. Enjoy your boring life." << endl;
			return ENDGAME;
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
	
	return CONTINUE;
}

int Scene::run_farm() {
	return CONTINUE;
}

int Scene::run_pirate_ship() {
	return CONTINUE;
}

int Scene::run_horse_ride() {
	return CONTINUE;
}

int Scene::run_eels() {
	return CONTINUE;
}

int Scene::run_cliffs() {
	return CONTINUE;
}

int Scene::run_poison() {
	return CONTINUE;
}

int Scene::run_fire_swamp() {
	return CONTINUE;
}

int Scene::run_pit() {
	return CONTINUE;
}

int Scene::run_miracle_max() {
	return CONTINUE;
}

int Scene::run_gate() {
	return CONTINUE;
}

int Scene::run_castle() {
	return CONTINUE;
}

int Scene::run_stable() {
	return CONTINUE;
}

int Scene::run_finale() {
	return CONTINUE;
}

int Scene::run_closing() {
	return CONTINUE;
}
