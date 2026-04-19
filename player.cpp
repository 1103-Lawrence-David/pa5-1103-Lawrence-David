#include "player.h"
Player::Player():User(){
    select = -1;
    token = "w";
}

Player::Player(int s, string t, string n, bool w):User(n, w){
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

void Player::userMove(int i){
    cout << "player move: " << i << endl;
}