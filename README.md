# the-princess-died



## Setup to run the game

You can alternatively get the  [CS50 served link here](https://ide-eec4957140eb49608fa9dd68c0a97ee0-8081.cs50.ws/) and run this game in CS50 IDE if you are not using a Linux machine.


- Clone the repo into your local machine by using this command
``` 
git clone https://github.com/toQhom/the-princess-died.git
```

## Run the game simply by using Makefile
get into the directory 
```bash
cd the_princess_died/
```
run the Makefile
```
make
```
now you will get to run the following commands automatically after you run the ```make``` command.(no need to type this again, Makefile will take care of this for you).
```
g++ -c main.cpp
g++ -c scenes.cpp
g++ main.o scenes.o -o output
```
- Now object files will be created in your working local directory 
#### you will have these files
```
Makefile  
main.cpp  
main.o  
output*  
scenes.cpp  
scenes.h  
scenes.o
```

-  #### You are all set for playing the game.
run this command in your terminal and you will enter into the game.
```
./output
```
 #### If you want to quit the game press ```ctrl+c``` or ```cmd+c``` 

### If you want to clean up your directory 
```bash
make clear
```
#### the object files (.o) will be deleted