game: main.o
	g++ -o game main.o

main.o: main.cpp
	g++ -c main.cpp

make clean: 
	rm *.o game 