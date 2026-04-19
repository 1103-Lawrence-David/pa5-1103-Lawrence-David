#include "board.h"


int main(){
    bool winCon = false;
    string tempString, tempToken;
    int userInput;
    
    cout << "please enter your name: ";
    cin >> tempString;
    cout << "please enter whether you are x or o (you can get creative though!): ";
    cin >> tempToken;
        
    Player p1(-1, tempToken, tempString, winCon);
    if(tempToken == "o" || tempToken == "O"){
        tempToken = "X";
    }
    else{
        tempToken = "O";
    }
    
    Computer c1(-1, tempToken, "Computer", winCon);
    Board newBoard;
    

    while (userInput != 0 || winCon == false){
        cout << newBoard;
        cout << "Please select your move." << endl;
        cin >> userInput;
        if(userInput != 0){
            newBoard.updateBoard(p1, userInput);
            cout << newBoard << endl << "The Computer has taken its turn:" << endl;
            newBoard.Computer::userMove(userInput); //jank temp solution
        }
        
    }
    return 0;
}