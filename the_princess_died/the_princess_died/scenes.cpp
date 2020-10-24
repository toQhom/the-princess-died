#include "scenes.h"

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
	//set the scene
	cout << endl << "The wind dies down. The sky above you is clear and the grass below you is soft." << endl;
	cout << "In the distance you hear a woman's voice calling, \"Farm Boy!\"" << endl;
	getInput();

	//standing up
	responses.clear();
	responses = { "stand up", "stand" };
	if (find(responses.begin(), responses.end(), input) != responses.end()) {
		cout << "You stand up." << endl;
	}
	else {
		while (!(find(responses.begin(), responses.end(), input) != responses.end())) {
			cout << "And how do you plan on doing that while lying down?" << endl;
			getInput();
		}
	}
	
	//following the voice
	do {
		cout << endl << "Where are you going to go?" << endl << "1) Follow the voice" << endl << "2) Nowhere" << endl;
		getInput();
		if (input == "follow the voice" || input == "1") {
			cout << "You follow the voice across some hills of farmland to a small shack, where you find a familiar face." << endl;
			wait = false;
		}
		else if (input == "nowhere" || input == "2") {
			cout << "Are you sure? (yes/no)";
			getInput();
			while (input == "yes" || input == "y") {
				cout << "Are you sure? (yes/no)";
				getInput();
			}
			wait = false;
		}
		else {
			cout << "That response is inconceivable. Try reading your options again. :(" << endl;
			wait = true;
		}
	} while (wait);

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
