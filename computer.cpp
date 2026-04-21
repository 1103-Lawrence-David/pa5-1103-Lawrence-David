#include "computer.h"
Computer::Computer():User(){
    select = -1;
    token = "w";
}

Computer::Computer(int s, string t, string n, int i, bool w):User(n, i, w){
    select = s;
    token = t;
}

Computer::Computer(const Computer& rhs):User(rhs){
    select = rhs.select;
    token = rhs.token;
}

int Computer::getSelect(){
    return select;
}

string Computer::getToken(){
    return token;
}

void Computer::userMove(int& i){
    cout << "THIS IS FOR TESTING, REMOVE BEFORE SUBMIT" << i << endl;
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
}