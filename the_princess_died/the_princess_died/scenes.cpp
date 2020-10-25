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
    cout << "It takes you a minute to realize you have left the portal because everything is still dark." << endl;
    cout << "Then you realize you're falling. The wind rushes around you and you plunge into bitterly cold water." << endl;
    cout << "You panic! What should you do?" << endl;

    getInput();

    if (input=="swim") {
        cout << "You begin to swim, suddenly very thankful for that grumpy swim teacher you had last year." << endl;
    }
    else {
        cout << "You continue to sink in the dark water. What do you do?" << endl;
        getInput();
        if (input == "swim") {
            cout << "You begin to swim, thanking heaven for that grumpy swim teacher you had in 5th grade." << endl;
        }
        else {
            cout << "The waters close above and you hear a shriek getting closer." << endl;
            return 0; //!continue;
        }
    }

    cout << "Suddenly, a shriek cuts through the night. These are the eel infested waters!" << endl;
    cout << "Before you can process the danger, the stillness of the night is broken again, this time with a loud splash." << endl;
    cout << "The princess! The eels circle around her. One begins to charge! \nWhat will you do?" << endl;

    cout << "You can: \n1) Hope the eel goes away \n2) Try to strangle it \n3) Feed the eel a banana" << endl;
	getInput();

    if (input == "1" || input == "hope the eel goes away") {
        cout << "Buttercup faces a gruesome death. The eel turns towards you and shrieks." << endl;
        return !CONTINUE; //ends the game
    }
    else if (input == "2" || input == "try to strangle it") {
        cout << "12,000 volts charge through your body. Of course they had to be electric eels too." << endl;
        return !CONTINUE;
    }
    else if (input == "3" || input == "feed the eel a banana") {
        cout << "With the sweet banana between its needlelike teeth, the slimy creature nuzzles up beside you. \nYou seem to have made a friend." << endl;
    }
    else {
        cout << "That response is inconceivable. Try reading your options again. :(" << endl;
    }
	
    cout << endl<< "But the peace doesn't last long. Another eel with blind hunger behind its foggy eyes charges at Buttercup." << endl;
    cout << "What do you do?" << endl;
    cout << "You can: \n1) Hope the eel goes away \n2) Try to strangle it \n3) Feed the eel a banana" << endl;
	getInput();

    if (input == "1" || input == "hope the eel goes away") {
        cout << "Buttercup faces a gruesome death. The eel turns towards you and shrieks." << endl;
        return !CONTINUE; //ends the game
    }
    else if (input == "2" || input == "try to strangle it") {
        cout << "12,000 volts charge through your body. Of course they had to be electric eels too." << endl;
        return !CONTINUE;
    }
    else if (input == "3" || input == "feed the eel a banana") {
        cout << "You don't have any bananas left." << endl;
    }
    else {
        cout << "That response is inconceivable. Try reading your options again. :(" << endl;
    }

    cout << "But luckily a giant arm punches the eel from above and Buttercup is lifted safely into the boat." << endl;
    cout << "The portal opens in the sky again and through it you too are lifted to safety." << endl;
	return CONTINUE; //continues the game
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
    int difficulty = 13; // higher is harder, range of random numbers

    srand(time(0));

    while (doorPosition == 0) { // we don't want the door to be where he is!
        doorPosition = rand() % difficulty - (difficulty/2); // set to random number between -6 and 6, positive is right, make sure not equal 0
    }

    // Storyline
    cout << "This time, you find yourself in a clearing. Soon, two men enter the clearing. You recognize them as Inigo and Fezzik and remember they are looking for the torture chamber. ";
    cout << "Inigo prays and trys to follow his sword. Clearly, it isn't working. You sigh and start to push Inigo towards the secret entrance." << endl;

    // Instructions
    cout << "To move left type 'L' and to move right type 'R'. Type more characters afterwards to move farther! (e.g. 'RR' moves two right)" << endl;

    while (inigoPosition != doorPosition) {
        cout << "Enter your push!" << endl;
        cout << ">>";
        cin >> input; // can't use getline so can't use getInput()
        if ((input.at(0) == 'L') || (input.at(0) =='l')) { // will NOT be converted to lowercase
            cout << "You pushed left!" << endl;
            inigoPosition = inigoPosition - input.length();
        }
        else if ((input.at(0) == 'R') || (input.at(0) =='r')) {
            cout << "You pushed right!" << endl;
            inigoPosition = inigoPosition + input.length();
        }
        else { 
            cout << "That's not a push! Try L or R" << endl;
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
    cin.ignore();
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
