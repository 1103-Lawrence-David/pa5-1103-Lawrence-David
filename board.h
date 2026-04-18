#ifndef BOARD_H
#define BOARD_H
#include "computer.h"
#include "player.h"
class Board{
    char* boardState;
    public:
        Board();
        Board(char*);
        Board(const Board&);

        char* getBoard();

        void updateBoard(Player);
        void updateBoard(Computer);

        int mainMenu();

        friend ostream& operator<<(const ostream&, const Board&);
        ~Board();
        Board& operator =(const Board&);
};
#endif