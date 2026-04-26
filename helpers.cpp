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
int computerMoves(int* arr, int& mSize){
    int count = 0;
    string temp;
    ifstream inFile("move.txt");
    if(!inFile.is_open()){
        cout << "file not opened properly" << endl;
        return 0;
    }

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
    inFile.close();
    return 1;
}
void endGame(Board& b, bool& w, int& t, int& u){
    cout << "if you would like to play again, please enter any number except 0. If you would like to end the program, please enter 0." << endl;
    cin >> u;
    if(u != 0){
        b.resetBoard(w);
        t = 0;
    }
    else{
        cout << "Your statistics have been exported to the file \"Win_info.txt\" Have a wonderful rest of your day." << endl;
    }
}
void winOut(int t, int p, int c, string n1, string n2){
    ofstream outFile("Win_Info.txt");
    if(!outFile.is_open()){
        cout << "could not open file." << endl;
    }
    else{
        outFile << "The amount of times " << n1 << " won is " << p << endl;
        outFile << "The amount of times " << n1 << " lost to "<< n2 << " is " << c << endl;
        outFile << "The amount of times you tied is " << t << endl;
        outFile.close();
    }
}