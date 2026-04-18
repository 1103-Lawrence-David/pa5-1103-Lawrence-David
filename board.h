#ifndef BOARD_H
#define BOARD_H
#include "computer.h"
#include "player.h"
class Board:public Player, public Computer{
    char* boardState;
    public:
        Board();
        Board(char*);
        Board(const Board&);

        char* getBoard();

        template <typename T>
        T updateBoard(T u){
            return u.userMove();
        }

        int mainMenu();

        friend ostream& operator<<(const ostream&, const Board&);

        ~Board();
        Board& operator =(const Board&);
};
#endif