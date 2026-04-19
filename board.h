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

        template <typename T>
        T updateBoard(T u, int i){
            u.userMove(i);
            return u;
        }

        int mainMenu();

        friend ostream& operator<<(ostream&, const Board&); //unfucked

        ~Board();
        Board& operator =(const Board&);
};
#endif