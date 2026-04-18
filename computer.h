#ifndef COMPUTER_H
#define COMPUTER_H
#include "user.h"

class Computer: public User{

    public:

    virtual void printBoard() =0;

};
#endif