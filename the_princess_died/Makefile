all: output

output: main.o scenes.o
		 g++ main.o scenes.o -o output

main.o: main.cpp
		g++ -c main.cpp

scenes.o: scenes.cpp
		g++ -c scenes.cpp

clean:
		rm -rf *.o output