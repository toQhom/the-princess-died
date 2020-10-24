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
