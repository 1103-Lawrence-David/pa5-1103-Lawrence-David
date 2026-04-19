#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class User{
    string name;
    bool win;
    public:
        User();
        User(string, bool);
        User(const User&);

        string getName();
        bool getWin();

        void setName(string);
        void setWin(bool);

        virtual void userMove(int)=0;
        

};
#endif