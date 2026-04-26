#include "board.h"
#ifndef HELPERS_H
#define HELPERS_H

void setup(string& tempString, string& tempToken, int& i, string& tempToken2);
int computerMoves(int* arr, int& mSize);
void endGame(Board& b, bool& w, int& t, int& u);
void winOut(int, int, int, string, string);

template <typename T>
void ruleCheck(T u, Board b, int& uI, int t, int* arr, int id){ //fucked, bad allocatrion whne given 0
    bool valid = false;
    if(id == 1){
        while(valid == false){
            if(b.getBoard(uI - 1) != "0" && uI != 0){
                cout << "Please input a valid input." << endl;
                u.userMove(uI);
            }
            else{
                valid = true;
            }
        }
    }
    else if(id == 2){
        int temp = 0, maxSize = t+1;
        int tempArr[9];

        while(valid == false){
            maxSize *=9;
            for(int i = t * 9; i < maxSize; i++){
                if(t != 0){
                    tempArr[temp] = arr[i-1];
                    temp++;
                }
                else{
                    tempArr[i] = arr[i];
                }
            }
            for(int i = 0; i < 9; i++){
                temp = tempArr[i];
                if(b.getBoard(temp- 1) != "0" && temp != 0){}
                else{
                    uI = temp;
                    i = 10;
                    valid = true;
                }
            }
        }
    }
    else{
        cout << "fucked" << endl;
    }
}

#endif
