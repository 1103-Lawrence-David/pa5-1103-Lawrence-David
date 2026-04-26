#include "computer.h"
Computer::Computer():User(){
    token = "w";
}

Computer::Computer(string t, string n, int i, int wA, bool w):User(n, i, wA, w){

    token = t;
}

Computer::Computer(const Computer& rhs):User(rhs){
    token = rhs.token;
}

string Computer::getToken(){
    return token;
}

void Computer::userMove(int& i){
    
}