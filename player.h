#ifndef PLAYER_H
#define PLAYER_H
#include "user.h"

class Player: public User{
    int select;
    string token;

    public:
        Player();
        Player(int, string, string, int, bool);
        Player(const Player&);

        int getSelect();
        string getToken();

        void userMove(int&) override;


};
#endif