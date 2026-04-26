//Author: David Lawrence
#ifndef PLAYER_H
#define PLAYER_H
#include "user.h"

class Player: public User{
    string token;

    public:
        Player();
        Player(string, string, int, int, bool);
        Player(const Player&);
        
        string getToken();

        void userMove(int&) override;
};
#endif