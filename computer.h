#ifndef COMPUTER_H
#define COMPUTER_H
#include "user.h"

class Computer: public User{
    int select;
    string token;

    public:
        Computer();
        Computer(int, string, string, bool);
        Computer(const Computer&);

        int getSelect();
        string getToken();
        void userMove();

};
#endif