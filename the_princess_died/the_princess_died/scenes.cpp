#include "scenes.h"
#include <cctype>
#include <vector>

void Scene::getInput() {
	getline(cin, input);
	//TODO: switch to lowercase
}

bool Scene::run_opening() {
	/*
	//set the scene
	cout << "You wake up. You still feel sick from yesterday." << endl << "You hope your grandfather will get here soon to read you the story again." << endl;
	getInput();

	//makes them wait
	for (int i = 0; i < 3; i++) {
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
	*/
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
			while (!(input == "yes" || input == "y")) {
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

	//setting the scene at the shack
	cout << endl << "In the shack, Buttercup stands, preparing dinner for herself." << endl;
	cout << "You recognize this scene, it's exactly as your grandfather described it yesterday!" << endl;
	cout << "Westley enters, drops firewood into a pile in the corner, and starts to walk out the door." << endl;
	cout << "Buttercup calls out to him, \"Oh Farm Boy\". \nShe looks around for something for him to grab." << endl;
	cout << "Seeing nothing, she says, \"Nevermind\". Westley leaves." << endl;
	cout << "This is wrong. There is no pitcher here like in the story from yesterday." << endl;

	//initial reaction to the pitcher scene
	do {
		cout << endl <<"What do you do?" << endl << "1) Talk to Buttercup" << endl << "2) Tap Buttercup on the shoulder" << endl << "3) Leave the shack" << endl << "4) Give up" << endl;
		getInput();
		if (input == "1" || input == "talk to buttercup") {
			cout << "You call out to Buttercup, but she makes no indication of hearing you." << endl;
			wait = true;
		}
		else if (input == "2" || input == "tap buttercup on the shoulder") {
			cout << "You walk over and tap Buttercup on the shoulder, but she does not seem to feel it." << endl;
			wait = true;
		}
		else if (input == "3" || input == "leave the shack") {
			cout << "You walk out of the shack." << endl;
			wait = false;
		}
		else if (input == "4" || input == "give up") {
			cout << "Somewhere in the distance, Westley realizes he does not have any chance with Buttercup." << endl;
			cout << "He leaves the farm, off to some new adventure." << endl;
			cout << "You resign yourself to a life of nothing, as you are stuck on the farm for eternity." << endl;
			return !CONTINUE;
		}
		else {
			cout << "That response is inconceivable. Try reading your options again. :(" << endl;
			wait = true;
		}
	} while (wait);

	//retrieving the pitcher
	cout << endl << "As you step out of the shack, you see Westley returning to the shack with more firewood." << endl;
	cout << "You turn the corner around the shack, and notice a pitcher at your feet." << endl;
	getInput();
	responses.clear();
	responses = { "take pitcher", "pick up pitcher", "grab pitcher", "retrieve the pitcher" };
	if (find(responses.begin(), responses.end(), input) != responses.end()) {
		cout << "You pick up the pitcher as Westley approaches the building." << endl;
	}
	else {
		int counter = 0;
		while (!(find(responses.begin(), responses.end(), input) != responses.end())) {
			counter++;
			cout << "You could do that, but Westley is approaching the shack and the pitcher is still at your feet." << endl;
			getInput();
		}
		if (counter > 3) {
			cout << "You pick up the pitcher, but it is too late." << endl;
			cout << "As Westley leaves the shack, he realizes he does not have any chance with Buttercup." << endl;
			cout << "He leaves the farm, off to some new adventure." << endl;
			cout << "You resign yourself to a life of nothing, as you are stuck on the farm for eternity." << endl;
			return !CONTINUE;
		}
		else {
			cout << "You pick up the pitcher." << endl;
		}
	}

	//resolve the situation
	cout << endl << "You reenter the shack. Buttercup does not notice." << endl;
	cout << "You place the pitcher above Buttercup's head as Westley returns." << endl;
	cout << "Again, Buttercup calls him. This time, she notices the pitcher above her head." << endl;
	cout << "The scene continues as you remember." << endl;
	cout << "As Buttercup and Westley gaze into each others eyes, you feel the wind pick up." << endl;
	cout << "The door to the shack has been transformed into a portal of swirling gray clouds." << endl;

	//continue on with the game
	responses.clear();
	responses = { "enter portal", "go through portal", "use portal" };
	do {
		getInput();
		if (find(responses.begin(), responses.end(), input) != responses.end()) {
			cout << "Shutting you eyes, you enter the portal." << endl;
			wait = false;
		}
		else {
			cout << "So we're just going to ignore the portal?" << endl;
			wait = true;
		}
	} while (wait);
	return CONTINUE;
}

bool Scene::run_pirate_ship() {
	cout << endl << "When you step out of the portal and look around you see that you are on a pirate ship with the Dread Pirate Roberts and Westley. \nAs you stand there you see Roberts kill all the members aboard but his crew and Westley. \nHe starts towards Westley, sword in hand, and immediately you know that you need to get the sword away from Roberts." << endl;
	cout << endl;
	do{
	cout << "With your skills of slight of hand you think you can \n1) Replace the sword with a banana you found in a pocket \n2) Smack his hand holding the sword \n3) Just stand there and watch \n4) Yell and try to distract Roberts." << endl;
	getInput();

	if(input == "1" || input == "Replace the sword with a banana you found in a pocket"){
		cout << "You are successful in keeping Westley alive, you hear the Dread Pirate Roberts say \"I\'ll most likely kill you in the morning\" to Westley just like you remember in the book. \nWhen you look around you see a portal open next to you and step through." << endl;
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
    cout << "It takes you a minute to realize you have left the portal because everything is still dark." << endl;
    cout << "Then you realize you're falling. The wind rushes around you and you plunge into bitterly cold water." << endl;
    cout << "You panic! What should you do?" << endl;

    cin >> input; // change to get input

    if (input=="swim") {
        cout << "You begin to swim, thanking heaven for that grumpy swim teacher you had in 5th grade." << endl;
    }
    else {
        cout << "You continue to sink in the dark water. What do you do?" << endl;
        cin >> input;
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
	cin >> input;

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
	cin >> input;

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
	//Vizzini and Man in Black are about to do a battle of the wits. Before Vizinni will agree to 
	//doing the poison challange you must beat him in a riddle.
	cout << "You exit the portal and see Vizzini holding a knife to Buttercup's throat as the Man in Black approaches." << endl;
	cout << "They begin to talk and agree to a battle of the wits." << endl;
	cout << "The Man in Black draws some poison from his cloak and begins to propose a deadly competition when Vizzini interrupts."<< endl;
	cout << "\"Before I risk my life I have to know I am facing a worthy opponent, you must solve my riddle first.\"" << endl;
	do{
		cout << "\n\"The riddle is: 'What starts with an e and ends with an e and has one letter in it?'\"" << endl;
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
			cout << "The Man in Black glances at the approaching thunderheads and continues to ponder." << endl;
			wait = true;
		}
		else if (input == "3" || input == "whisper the answer") //correct answer
		{
			cout << "You go up to the Man in Black and whisper:" << endl;
			getInput();
			if (input == "envelope" || input == "eye") //if you enter the correct answer to riddle you win this level
			{
				cout << endl << "You are not sure if the Man in Black heard you, then he gets a focused look on his face and exclaims " << input << "!" << endl;
				cout << "Vizzini, looking dissapointed, agrees to continue onto the Man in Black's battle of wits." << endl;
			}
			else //incorrect, try again
			{
				cout << endl << "The Man in Black thinks for a moment and murmurs \"" << input << "\" under his breath and shakes his head." << endl;
				cout << "You now know he heard you, but that your answer must be wrong!" << endl;
				cout << "Think for a minute and try another answer to help the Man in Black." << endl;
				getInput();
				if (input == "envelope" || input == "eye") //correct, continue
				{
					cout << "The Man in Black gets a focused look on his face and exclaims \"" << input << "!\"" << endl;
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
	cout << endl << "Vizzini and the Man in Black continue their logic battle as a portal appears before you and you feel the whooshing in your ears yet again." << endl;
	return CONTINUE;
}




bool Scene::run_fire_swamp() {
	cout << endl << "As the pressure returns to normal you begin to get your bearings." << endl;
	cout << "You notice that you are now in The Fire Swamp." << endl;
	cout << "In front of you there are three paths. They go left, right, and forward." << endl;
	getInput();//if I code 3 options this will branch into an if statement, but for now they all three go to the same story.

	//Left: Rats, Right: Quicksand, Forward: Fire, if they choose backwards they run into shrek 
	//implement the do while loop for this section that way it checks the inputs, within each have a sub do-while loop for each direction
	//implement directionality and other story options at a later time
	//start with fire geyser part
	cout << endl << "As you walk " << input << " you see Buttercup and Westley ahead of you." << endl;
	cout << "You run to catch up, only to be stopped by a fire geyser!" << endl;
	cout << "The weird thing is that you didn't hear the popping sound that your Grandpa mentioned yesterday." << endl;
	
	//This loop allows you to 
	do 
	{
		cout << endl << "What do you do: \n1) Run to Buttercup and Westley screaming \n2) Observe the geyser\n3) Grab another banana from your pocket and stick it in the geyser" << endl;
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
			cout << "As you scrutinize the geyser that just exploded you notice a glow coming from the ground just moments before it erupts." << endl;
			
			//second do while loop that lets you alert buttercup and westley
			do {
				cout << endl << "Maybe you can warn Westley and Buttercup if only you could get their attention!" << endl;
				cout << "How do you want to alert them of when a fire geyser is about to erupt? \n1) Sing an accapella rendition of La Bamba." << endl;
				cout << "2) Throw the banana at Buttercup and Westley. \n3) Pick up rocks and hit them together when you see a glow." << endl;
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
				else if (input == "3" || input == "pick up rocks and hit them together when you see a glow") {
					cout << "Every time you see a glow you make a noise with two rocks, alerting Westley and Buttercup." << endl;
					cout << endl << "Westley and Buttercup are able to navigate the woods safely." << endl;
					cout << "When they see Prince Humperdinck a portal appears beside you." << endl;
					responses.clear();
					responses = { "enter portal", "go through portal", "use portal" }; //continue on with the game
					do {
						getInput();
						if (find(responses.begin(), responses.end(), input) != responses.end()) {
							cout << "Shutting you eyes, you enter the portal." << endl;
							wait = false;
						}
						else {
							cout << "So we're just going to ignore the portal?" << endl;
							wait = true;
						}
					} while (wait);

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
    string input;
    int doorPosition = 0;
    int inigoPosition = 0; 

    srand(time(0));

    while (doorPosition == 0) { // we don't want the door to be where he is!
        doorPosition = rand() % 11 - 5; // set to random number between -5 and 5, positive is right, make sure not equal 0
    }

    // Storyline
    cout << endl << "This time, you find yourself in a clearing. Soon, two men enter the clearing. \nYou recognize them as Inigo and Fezzik and remember they are looking for The Pit of Despair. " << endl;
    cout << "Inigo prays and trys to follow his sword. Clearly, it isn't working. \nYou sigh and start to push Inigo towards the secret entrance." << endl;

    // could add a choice here 

    // Instructions
    cout << endl << "To move left type '<' and to move right type '>'. Type more characters afterwards to move farther! (e.g. '>>' moves two right)" << endl;

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
        // Check current position
        if (inigoPosition == doorPosition) {
            cout << "Whew, he made it!" << endl;
        }
        else if (inigoPosition < doorPosition) {
            cout << "Oh no, the door is to the right!" << endl;
        }
        else {
            cout << "Oh no, the door is to the left!" << endl;
        }
    }
	responses.clear();
	responses = { "enter portal", "go through portal", "use portal" }; //continue on with the game
	do {
		getInput();
		if (find(responses.begin(), responses.end(), input) != responses.end()) {
			cout << "Shutting you eyes, you enter the portal." << endl;
			wait = false;
		}
		else {
			cout << "So we're just going to ignore the portal?" << endl;
			wait = true;
		}
	} while (wait);


	return CONTINUE;
}

bool Scene::run_miracle_max() {
	cout << endl << "Once you step through the portal you see that you are now at Miracle Max's house. \nWestley is laying on the table, still dead (mostly). \nYou overhear Miracle Max say that he can't remember what the ingredients for the pill that will revive Westley." << endl;
	getInput();
		
	//vector for right answers to look around the room
		responses.clear();
		responses = { "look around", "look", "walk around"};

		//checks for user to walk around the room
		if(find(responses.begin(), responses.end(), input) != responses.end()) {
			cout << "You look around the room and see papers scattered everywhere with scribbles all over them. \nYou find one that says \"Ingredients For Life Pill\". \nYou know this is what you need, however it seems to be written in some sort of code." << endl;
		}
		else{
			while(!(find(responses.begin(), responses.end(), input) != responses.end())){
				cout << "How will you do that without looking whats around you?" << endl;
				getInput();
			}
		
		}
		
		//start of recipe prompt
		cout << endl << "The hand writing reads... \n1) ecotcohla \n2) beaelly \n3) eseewad" << endl;
		cout << "What do you think ingredient 1 is? (ecotcohla)" << endl;
		getInput();

		//checks for chocolate
		while(input != "chocolate"){
			cout << "That doesn't sound like something that should be in this recipe.\nTry Again!\n" << endl;
			cout << "1) ecotcohla" << endl;
			getInput();
		}
		
		if(input == "chocolate"){
			cout << "Yes, you remember there is a chocolate coating!" << endl;
			cout << endl;
		}

		//2nd ingredient for recipe
		cout << "What do you think ingredient 2 is? (beaelly)" << endl;
		getInput();

		//checks for eyeball
		while(input != "eyeball"){
			cout << "I don't think that should be in this recipe either.\nTry Again!\n" << endl;
			cout << "2) beaelly" << endl;
			getInput();
		}
		if(input == "eyeball"){
			cout << "Yes! That seems like something that would revive you. \nThat's why we have the chocolate." << endl;
			cout << endl;
		}

		//3rd ingredient for recipe
		cout << "What do you think ingredient 3 is? (eseewad)" << endl;
		getInput();

		//check for seaweed
		while(input != "seaweed"){
			cout << "That doesn't seem like the answer to this scramble.\nTry Again!\n" << endl;
			cout << "3) eseewad" << endl;
			getInput();
		}
		if(input == "seaweed"){
			cout << "Yes! That's it! That is the last ingredient!" << endl;
			cout << endl;
		}
		
		//reached the ending
		cout << "Now you have know all the ingredients you whisper them in Miracle Max's ear. \nYou see him tilt his head and exclaim the ingredients and run off to go make the pill." << endl;
		cout << "You can now see a portal open next to you and are free to pass now. Would you like to go?" << endl;
	getInput();
	if(input != "yes" || input != "y"){
		do {
			cout << "Really? You want to stay here? (y/n)" << endl;
			getInput();
		} while (!(input == "no" || input == "n"));
	}
	else{
		cout<< "You walk into the portal to hopefully find a way out of this book finally." << endl;
		cout << endl;
	}
	return CONTINUE;

}

bool Scene::run_gate() {
	return CONTINUE;
}

bool Scene::run_castle() {
	
	return CONTINUE;
}

bool Scene::run_stable() {
	//This is where we follow fezzik around to find four horses
	cout << "You exit the portal, a little sad that you missed all of Westley's insults for Humperdinck." << endl;
	cout << "In front of you, Fezzik is bumbling around, seemingly without a purpose." << endl;
	cout << "What do you want to do?" << endl;
	//look around
	//vector for right answers to look for the stable
	responses.clear();
	responses = { "look around", "look", "walk around" };

	//checks for user to see the stable
	while (!(find(responses.begin(), responses.end(), input) != responses.end())) {
		cout << "How do you know what you want to do without looking around first?" << endl;
		getInput();
	}
	cout << "You look up and see the stables ahead." << endl;
	//vector for right answers to look for the stable
	responses.clear();
	responses = { "walk forward", "go to the stables", "walk", "move" };

	//checks for user to see the stable
	while (!(find(responses.begin(), responses.end(), input) != responses.end())) {
		cout <<endl<< "You should probably do something other than just stand there." << endl;
		getInput();
	}
	
	do {
		//now we have to get in the stable to let the horses out
		cout << endl << "You go to the stables and notice that there is a lock." << endl;
		cout << "You can: \n1) Kick down the door \n2) Pick the lock \n3) Look for a second entrance" << endl;
		getInput();

		if (input == "1" || input == "kick down the door") {
			cout << "You successfully kick down the door, but not without the guards noticing." << endl;
			cout << "The gaurds assume that Fezzik brok down the door and arrest him." << endl;
			cout << "Since Fezzik doesn't have any escape horses everyone else was caught as well, trapping you in the book." << endl;
			return !CONTINUE; //ends the game
		}
		else if (input == "2" || input == "pick the lock") {
			cout << "You pick the lock and the stable door swings silently open." << endl;
			cout << "Seeing this, Fezzik has the idea to steal some horses and goes in the stable" << endl;
			cout << "As Fezzik exits the stable with four white horses, a portal appears to your right" << endl;
			getInput();
			if (input != "yes" || input != "y") {
				do {
					cout << endl << "The horses went with Fezzik, you can't pet them. \nDo you want to go through the portal now? (y/n)" << endl;
					getInput();
				} while (!(input == "yes" || input == "y"));
			}
			else {
				cout << "You walk into the portal to hopefully find a way out of this book finally." << endl;
				cout << endl;
			}

			wait = false;
		}
		else if (input == "3" || input == "look for a second entrance") {
			cout << "You circle the stable, there is no second entrance." << endl;
			wait = true;
		}
		else {
			cout << "That response is inconceivable. Try reading your options again. :(" << endl;
			wait = true;
		}
	} while (wait);

	return CONTINUE;
}

bool Scene::run_finale() {
	return CONTINUE;
}

bool Scene::run_closing() {
	return CONTINUE;
}
