#include "user.h"
User::User(){
    name = "fenrir";
    win = false;
}

User::User(string n, bool w){
    name = n;
    win = w;
}

User::User(const User& rhs){
    name = rhs.name;
    win = rhs.win;
}

string User::getName(){
    return name;
}

bool User::getWin(){
    return win;
}

void User::setName(string n){
    name = n;
}

void User::setWin(bool w){
    win = w;
}
