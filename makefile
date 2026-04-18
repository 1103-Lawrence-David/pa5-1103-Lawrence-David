game: board.o computer.o main.o player.o user.o 
	g++ -o game board.o computer.o main.o player.o user.o

board.o: board.h board.cpp computer.h player.h
	g++ -c board.cpp

computer.o: computer.cpp computer.h user.h
	g++ -c computer.cpp 

main.o: main.cpp computer.h player.h
	g++ -c main.cpp

player.o: player.cpp player.h user.h
	g++ -c player.cpp

user.o: user.cpp user.h
	g++ -c user.cpp

make clean: 
	rm *.o game 