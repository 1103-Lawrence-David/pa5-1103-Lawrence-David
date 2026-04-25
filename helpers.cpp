#include "helpers.h"
void setup(string& tempString, string& tempToken, int& i, string& tempToken2){
    cout << "please enter your name: ";
    cin >> tempString;
    cout << "please enter whether you are x or o (you can get creative though!): ";
    cin >> tempToken;
    if(tempToken == "o" || tempToken == "O"){
        tempToken2 = "X";
    }
    else{
        tempToken2 = "O";
    }
    i = -2;
}
void computerMoves(ifstream& inFile, int* arr, int& mSize){
    int count = 0;
    string temp;

    while(!inFile.eof()){
        getline(inFile, temp, ',');
        mSize = stoi(temp);
        arr[count] = mSize;
        count++;
        if(count % 9 == 8){
            getline(inFile, temp);
            mSize = stoi(temp);
            arr[count] = mSize;
            count++;
        }
    }
}
