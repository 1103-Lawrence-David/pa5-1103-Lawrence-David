#ifndef PLAYER_H
#define PLAYER_H
#include "user.h"

class Player: public User{
    string select;
    public:
        Player();
        Player(string);
        Player(const Player&);

        string getSelect();

        void userMove();


};
#endif