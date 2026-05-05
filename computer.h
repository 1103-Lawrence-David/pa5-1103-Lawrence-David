//Author: David Lawrence
#ifndef COMPUTER_H
#define COMPUTER_H
#include "user.h"

class Computer: public User{
    string token;

    public:
        Computer();
        Computer(string, string, int, int, bool);
        Computer(const Computer&);

        string getToken();
        void userMove(int&) override;
};
#endif