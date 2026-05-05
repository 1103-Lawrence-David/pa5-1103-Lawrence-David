#include "user.h"
User::User(){
    name = "fenrir";
    id = 0;
    winAmount = 100;
    win = false;
}

User::User(string n, int i, int wA, bool w){
    name = n;
    id = i;
    winAmount = wA;
    win = w;
}

User::User(const User& rhs){
    name = rhs.name;
    id = rhs.id;
    winAmount = rhs.winAmount;
    win = rhs.win;
}

string User::getName(){
    return name;
}

int User::getID(){
    return id;
}
int User::getWinAmount(){
    return winAmount;
}

bool User::getWin(){
    return win;
}

void User::setName(string n){
    name = n;
}

void User::setID(int i){
    id = i;
}

void User::setWin(bool w){
    win = w;
}
void User::setWinAmount(int wA){
    winAmount = wA;
}