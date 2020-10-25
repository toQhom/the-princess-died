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
	cout << "As the pressure returns to normal you begin to get your bearings." << endl;
	cout << "You notice that you are now in The Fire Swamp." << endl;
	cout << "In front of you there are three paths. They go left, right, and forwared." << endl;
	getInput();//if I code 3 options this will branch into an if statement, but for now they all three go to the same story.

	//Left: Rats, Right: Quicksand, Forward: Fire, if they choose backwards they run into shrek 
	//implement directionality and other story options at a later time
	//start with fire geyser part
	cout << "As you walk " << input << " you see Buttercup and Westley ahead of you." << endl;
	cout << "You run to catch up, only to be stopped by fire geyser!" << endl;
	cout << "The weird thing is that you didn't hear the popping sound that your Grandpa mentioned yesterday." << endl;
	
	//This loop allows you to 
	do 
	{
		cout << "What do you do: \n1) Run to Buttercup and Westley screaming \n2) Observe the geyser\n3) Grab another banana from your pocket and stick it in the geyser" << endl;
		getInput();
		//if statement for options
		if (input == "1" || input == "run to buttercup and westley screaming") //run to buttercup and westley, but how will you warn them, all get burnt to crips
		{
			cout << "You reach Westley and Buttercup and begin walking alongside them only for a fire geyser to open up directly in front of you." << endl;
			cout << "The last thing you see is a bright wave of red." << endl;
			return !CONTINUE;
		}
		else if (input == "2" || input == "observe the geyser")//observe and notice that a portal opens up moments before, allow choice to warn 
		{
			cout << "As you scrutinize the geyser that just exploded you notice a mini portal open up moments before it erupts." << endl;
			
			//second do while loop that lets you alert buttercup and westley
			do {
				cout << "Maybe you can warn Westley and Buttercup if only you could get their attention!" << endl;
				cout << "How do you want to alert them of when a fire geyser? \n1)Sing an accapella rendition of La Bamba." << endl;
				cout << "2) Throw the banana at Buttercup and Westley \n3) Pick up rocks and hit them together when you see a portal." << endl;
				getInput();

				if (input == "1" || input == "sing an accapella rendition of la bamba") {
					cout << "Your spectacular performance gets the attention of the giant rats." << endl;
					cout << "After you finish singing they fall out of the trance and devour you and your friends." << endl;
					return !CONTINUE; //ends the game
				}
				else if (input == "2" || input == "throw the banana at buttercup and westley") {
					cout << "The banana zooms towards Westley when it suddenly changes directions!" << endl;
					cout << "The banana is now coming directly towards you, its boomerang shape caused it to turn around." << endl;
					cout << "As you are dodging the rapidly approaching banana, a fire geyser goes off under Westley and Buttercup." << endl;
					cout << "The last thing you see is a banana colliding with your face." << endl;
					return !CONTINUE; //ends game
				}
				else if (input == "3" || input == "pick up rocks and hit them together when you see a portal.") {
					cout << "Every time you see a portal appear you make a noise with two rocks, alerting Westly and Buttercup." << endl;
					cout << "When you see Prince Humperdinck a portal appears beside you." << endl;
					//NEED PORTAL LOOP!
					//klsdjflkasdjefpoqiweufrpoiwahjef
					//lkasjdfl;kasjdflksajdf

					wait = false;
				}
				else {
					cout << "That response is inconceivable. Try reading your options again. :(" << endl;
					wait = true;
				}
			} while (wait);


		}
		else if (input == "3" || input == "grab another banana from your pocket and stick it in the geyser") //the banana explodes into lava banana, which tastes great but kills you!
		{
			cout << "As soon as you put the banana where the geyser was you see a portal open below the banana." << endl;
			cout << "You step back just as the geyser explodes lava hot banana all over you!" << endl;
			return !CONTINUE; //ends game, you are dead
		
		}
		else 
		{
			cout << "That response is inconceivable. Try reading your options again. :(" << endl;
			wait = true;
		}
	} while (wait);
		
		
		
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
