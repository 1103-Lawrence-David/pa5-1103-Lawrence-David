//Author: David Lawrence
//Version: 1.2.0 (Automated response implemented)
//This version includes a working version of the game, with the ability to enforce rules. 
//It no longer allows multiplayer support
//removed dynamic array of comp responses
#include "helpers.h"

int main(){
    bool winCon = false;
    string tempString, tempToken, tempToken2;
    int userInput, maxSize = 81, turnNum = 0;
    Board newBoard;
    int compMove[maxSize];

    setup(tempString, tempToken, userInput, tempToken2);
    Player p1(-1, tempToken, tempString, 1, winCon);
    Computer p2(-1, tempToken2, "Computer", 2, winCon);
    
    ifstream inFile("move.txt");
    if(!inFile.is_open()){
        cout << "program fucked" << endl;
        return 1;
    }
    computerMoves(inFile, compMove, maxSize);

    while(userInput != 0){ 
        while (userInput != 0 && winCon == false){
            cout << newBoard;
            cout << "Please select your move." << endl;
            p1.userMove(userInput);
            ruleCheck(p1, newBoard, userInput, turnNum, compMove, p1.getID());
            
            if(userInput != -1 && userInput != 0){
                newBoard.updateBoard(userInput, p1.getID(), tempToken);
                userInput = newBoard.winDeclare(tempToken, winCon, p1.getName(), newBoard);
                if(userInput != -1 && userInput != 0){
                    cout << newBoard << endl << "The Computer has taken its turn:" << endl;
                    ruleCheck(p2, newBoard, userInput, turnNum, compMove, p2.getID());
                    newBoard.updateBoard(userInput, p2.getID(), tempToken2);
                    userInput = newBoard.winDeclare(tempToken2, winCon, p2.getName(), newBoard);
                    turnNum++;
                }
            }
        }
        cout << "if you would like to play again, please enter any number except 0. If you would like to end the program, please enter 0.";
        cin >> userInput;
        if(userInput != 0){
            newBoard.resetBoard(winCon);
            turnNum = 0;
        }
    }
    return 0;
}