#include "user.h"
User::User(){
    name = "fenrir";
    id = 0;
    win = false;
}

User::User(string n, int i, bool w){
    name = n;
    id = i;
    win = w;
}

User::User(const User& rhs){
    name = rhs.name;
    id = rhs.id;
    win = rhs.win;
}

string User::getName(){
    return name;
}

int User::getID(){
    return id;
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
