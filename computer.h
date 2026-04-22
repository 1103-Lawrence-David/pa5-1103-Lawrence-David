//Author: David Lawrence
#ifndef COMPUTER_H
#define COMPUTER_H
#include "user.h"

class Computer: public User{
    int select;
    string token;

    public:
        Computer();
        Computer(int, string, string, int, bool);
        Computer(const Computer&);

        int getSelect();
        string getToken();
        void userMove(int&) override;

};
#endif