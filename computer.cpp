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

}