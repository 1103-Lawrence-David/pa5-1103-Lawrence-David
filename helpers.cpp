#include "helpers.h"
void setup(string& tempString, string& tempToken, int& i, string& tempToken2, ofstream* outFile, int* arr, int& mSize){
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
void resizeArray(int* arr, int& mSize){

}
