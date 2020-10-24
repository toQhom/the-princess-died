#include "scenes.h"
#include <cctype>
#include <vector>

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
	cout << "When you step out of the portal and look around you see that you are on a pirate ship with the Dread Pirate Roberts and Westley. As you stand there you see kill all the members aboard but his crew and Westley. He starts towards Westley sword in hand. and imediatly you know that you need to get the sword away from Roberts." << endl;
	cout << endl;
	do{
	cout << "With your skills of slight of hand you think you can \n1) Replace the sword with a banana you found in a pocket \n2) Smack his hand holding the sword \n3) Just stand there and watch \n4) Yell and try to distract Roberts." << endl;
	getInput();

	if(input == "1" || input == "Replace the sword with a banana you found in a pocket"){
		cout << "You are successful in keeping Westley alive, you hear him say \" I\'ll most likely kill you in the morning\" to Westley just like you remember in the book. When you look around you see a portal open next to you and step through." << endl;
		cout << endl;
		wait = true;
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
		return !COUNTINUE;
		
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

	}while(wait)//end of the dowhile loop
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

	cout << "Once you step through the portal you see that you are now at Miracle Max's house. Westley is laying on the table still dead and you over hear Miracle Max say that he can't remember what the ingredients for the pill that will revive Westly" << endl;
	getInput();
	do{
	


	}while(wait)
	
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
