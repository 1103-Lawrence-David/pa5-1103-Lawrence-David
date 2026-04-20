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
        Board& updateBoard(Player&, int);

        friend ostream& operator<<(ostream&, const Board&); //unfucked

        ~Board();
        Board& operator =(const Board&);

        void setup(string&, string&, int&);
        Board& userMove(int, int, string);
        int winDeclare(string, bool&, string);
        void clearBoard();
};
#endif