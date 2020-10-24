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
	cout << "When you step out of the portal and look around you see that you are on a pirate ship with the Dread Pirate Roberts and Westley. \nAs you stand there you see Roberts kill all the members aboard but his crew and Westley. \nHe starts towards Westley sword in hand and immediately you know that you need to get the sword away from Roberts." << endl;
	cout << endl;
	do{
	cout << "With your skills of slight of hand you think you can \n1) Replace the sword with a banana you found in a pocket \n2) Smack his hand holding the sword \n3) Just stand there and watch \n4) Yell and try to distract Roberts." << endl;
	getInput();

	if(input == "1" || input == "Replace the sword with a banana you found in a pocket"){
		cout << "You are successful in keeping Westley alive, you hear him say \"I\'ll most likely kill you in the morning\" to Westley just like you remember in the book. \nWhen you look around you see a portal open next to you and step through." << endl;
		cout << endl;
		wait = false;
	}

	else if(input == "2" || input == "Smack his hand holding the sword"){
		cout << "Great job you were able to make the Dread Pirate Roberts drop the sword, but he immediately picks it back up to kill Westley" << endl;
		cout << "Now you are stuck here and won't be able to finish the story" << endl;
		cout << endl;
		return !CONTINUE;

	}

	else if (input == "3" || input == "Just stand there and watch"){
		cout << "You do nothing to stop Westley from dying and are now stuck here forever. Remember kids to never be a bystander" << endl;
		cout << endl;
		return !CONTINUE;
		
	}

	else if (input == "4" || input == "Yell and try to distract Roberts."){
		cout << "You watch as Westley gets killed and suddenly remember that the characters cannot hear you when you yell. You face palm as you realize that you are now stuck in the book because it can't end." << endl;
		cout << endl;
		return !CONTINUE;
	}
	else{
		cout << "That doesn't sound quite right, try again" << endl;
		cout << endl;
		wait = true;
	}

	} while (wait);//end of the dowhile loop

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
	//Vizzini and Man in Black are about to do a battle of the wits. Before Vizinni will agree to 
	//doing the poison challange you must beat him in a riddle.
	cout << "You exit the portal and see Vizzini holding a knife to Buttercup's throat as the Man in Black approaches." << endl;
	cout << "They begin to talk and agree to a battle of the wits" << endl;
	cout << "The Man in Black draws some poison from his cloak and begins to propose a deadly competition when Vizzini interrupts."<< endl;
	cout << "\"Before I risk my life I have to know I am facing a worthy opponent, you must solve my riddle first.\"" << endl;
	do{
		cout << "\n\"The riddle is: 'What starts with an e and ends with an e and has one letter in it?'" << endl;
		cout << "You can see the Man in Black struggling, you can: \n1) Watch him struggle \n2) Try an interpretive dance\n3) Whisper the answer" << endl;
		getInput();
		//if statement for answer options
		if (input == "1" || input == "watch him struggle") //answer that leads to an untimely demise
		{
			cout << "The Man in Black continues to struggle and eventually gives up." << endl;
			cout << "He then tries to rush Vizzini to disastrous ends!" << endl;
			cout << "As Buttercup dies the Man in Black rips off his mask and you see tears rolling down Westley's face." << endl;
			cout << "Now you are stuck in the book forever." << endl;
			return !CONTINUE; //ends the game
		}
		else if (input == "2" || input == "try an interpretive dance") //answer that allows you to try again
		{
			cout << "You begin to wave your arms and tap your feet." << endl;
			cout << "No one notices your flailing, however the sky begins to darken." << endl;
			cout << "You've discovered how to do a rain dance." << endl;
			cout << "The Man in Black glances and the approaching thunderheads and continues to ponder" << endl;
			wait = true;
		}
		else if (input == "3" || input == "whisper the answer") //correct answer
		{
			cout << "You go up to the Man in Black and whisper:" << endl;
			getInput();
			if (input == "enveope" || input == "eye") //if you enter the correct answer to riddle you win this level
			{
				cout << "You are not sure if the Man in Black heard you, then he gets a focused look on his face and exclaims " << input << "!" << endl;
				cout << "Vizzini, looking dissapointed, agrees to continue onto the Man in Black's battle of wits." << endl;
			}
			else //incorrect, try again
			{
				cout << "The Man in Black thinks for a moment and murmurs " << input << "under his breath and shakes his head." << endl;
				cout << "You now know he heard you, but that your answer must be wrong!" << endl;
				cout << "Think for a minute and try another answer to help the Man in Black" << endl;
				getInput();
				if (input == "enveope" || input == "eye") //correct, continue
				{
					cout << "You are not sure if the Man in Black heard you, then he gets a focused look on his face and exclaims " << input << "!" << endl;
					cout << "Vizzini, looking dissapointed, agrees to continue onto the Man in Black's battle of wits." << endl;
				}
				else //incorrect, you lose
				{
					cout << "The Man in Black thinks again, looking a bit puzzled, then finally says \"" << input << ".\"" << endl;
					cout << "Vizzini begins to cackle as he realizes he has won the battle of wits, now there is no escape from this book!" << endl;
					return !CONTINUE;
				}
			}
			wait = false;
		}
		else 
		{
			cout << "That response is inconceivable. Try reading your options again. :(" << endl;
			wait = true;
		}
	} while (wait);
	cout << "Vizzini and the Man in Black continue their logic battle as a portal appears before you and you feel the whooshing in your ears yet again." << endl;
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
