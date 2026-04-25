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
void resizeArray(int* arr2, int& mSize){
    int tempNum = mSize + 2;
    int* temp2 = new int[tempNum];
    for(int i = 0; i < tempNum; i++){
        temp2 [i] = arr2[i];
    }
    delete [] arr2;
    arr2 = temp2;
    mSize += 2;
}
void computerMoves(ifstream& inFile, int* arr, int& mSize){
    int count = 0, num, newM = mSize;
    int* arr2 = new int [newM];
    string temp;

    while(!inFile.eof()){
        if(count > newM){
            resizeArray(arr2, newM);
        }
        getline(inFile, temp, ',');
        num = stoi(temp);
        arr2[count] = num;
        count++;
        if(count % 9 == 8){
            getline(inFile, temp);
            num = stoi(temp);
            arr2[count] = num;
            count++;
        }
    }
    for(int i = 0; i < newM; i++){
        arr[i] = arr2[i];
    }
    mSize = newM;
}
