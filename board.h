//Author: David Lawrence
#ifndef BOARD_H
#define BOARD_H
#include "computer.h"
#include "player.h"
class Board:public Player, public Computer{
    string* boardState;
    public:
        Board();
        Board(string*);
        Board(const Board&);

        string getBoard(const int) const;
        void userMove(int&) override;

        friend ostream& operator<<(ostream&, const Board&);

        ~Board();
        Board& operator =(const Board&);
        Board& updateBoard(int, int, string);
        int winDeclare(string, bool&, string, Board);
        void resetBoard(bool&);
};
#endif