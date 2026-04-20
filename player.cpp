#include "player.h"
Player::Player():User(){
    select = -90;
    token = "w";
}

Player::Player(int s, string t, string n, int i, bool w):User(n, i, w){
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
            "please enter a valid number from 1 - 9";
        }
        else{
            validSelect = true;
        }
    }
    i--;
}