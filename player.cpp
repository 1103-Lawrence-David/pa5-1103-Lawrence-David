#include "player.h"
Player::Player():User(){
    select = -90;
    token = "w";
}

Player::Player(int s, string t, string n, int i, int wA, bool w):User(n, i, wA,  w){
    select = s;
    token = t;
}

Player::Player(const Player& rhs):User(rhs){
    select = rhs.select;
    token = rhs.token;
}

int Player::getSelect(){
    return select;
}

string Player::getToken(){
    return token;
}

void Player::userMove(int& i){
    bool validSelect = false;
    while(validSelect == false){
        cin >> i;
        if(i > 9 || i < 0){
            cout << "Please enter a valid number from 1 - 9, or 0 to exit the program.";
        }
        else{
            validSelect = true;
        }
    }
}