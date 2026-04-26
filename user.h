//Author:: David Lawrence
#ifndef USER_H
#define USER_H
#include <iostream>
#include <fstream>
using namespace std;

class User{
    string name;
    int id, winAmount;
    bool win;
    public:
        User();
        User(string, int, int, bool);
        User(const User&);

        string getName();
        int getID();
        int getWinAmount();
        bool getWin();

        void setName(string);
        void setID(int);
        void setWinAmount(int);
        void setWin(bool);

        virtual void userMove(int&)=0; //ABC CLASs
};
#endif