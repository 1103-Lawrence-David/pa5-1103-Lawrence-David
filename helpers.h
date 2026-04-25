#include "board.h"
#ifndef HELPERS_H
#define HELPERS_H

void setup(string& tempString, string& tempToken, int& i, string& tempToken2);
void resizeArray(int* arr, int& mSize);
void computerMoves(ifstream& inFile, int* arr, int& mSize);

template <typename T>
void ruleCheck(T u, Board b, int& i){
    bool valid = false;
    while(valid == false){
        if(b.getBoard(i - 1) != "0" && i != 0){
            cout << "Please input a valid input." << endl;
            u.userMove(i);
        }
        else{
            valid = true;
        }
    }
}

#endif
