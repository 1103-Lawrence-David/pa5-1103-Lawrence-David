#ifndef BOARD_H
#define BOARD_H
#include "computer.h"
#include "player.h"
class Board{
    char* boardState;
    public:
        Board();
        Board(char);
        Board(const Board&);

        void updateBoard(Board&);

        friend ostream operator<<(const ostream&, const Board&);

};
#endif