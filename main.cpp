//Author: David Lawrence
//Version: 1.4.0 (Bug fixes)
//This version includes a working version of the game, with the ability to enforce rules. 
//Added display of amount of games won, tied and who did. fixed it so that it properly updates the win tie amount, and fixed up some logic.
#include "helpers.h"
#define MAX_SIZE 81

int main(){
    bool winCon = false;
    string tempString, tempToken, tempToken2;
    int userInput, turnNum = 0, tie, win = 0, lose = 0, tieCheck = 0;
    Board newBoard;
    int compMove[MAX_SIZE];

    setup(tempString, tempToken, userInput, tempToken2);
    Player p1(tempToken, tempString, 1, win, winCon);
    Computer p2(tempToken2, "Computer", 2, lose, winCon);
    userInput = computerMoves(compMove);

    while(userInput != 0){ 
        newBoard.userMove(userInput);
        while (userInput != 0 && winCon == false){
            cout << newBoard;
            cout << "Please select your move." << endl;
            p1.userMove(userInput);
            ruleCheck(p1, newBoard, userInput, turnNum, compMove, p1.getID());
            
            if(userInput != -1 && userInput != 0){
                newBoard.updateBoard(userInput, tempToken);
                userInput = newBoard.winDeclare(tempToken, winCon, p1.getName(), newBoard, tie);
                if(winCon == true && tieCheck == tie){
                    win++;
                    p1.setWinAmount(win);
                }
                if(userInput != -1 && userInput != 0){
                    cout << newBoard << endl << "The Computer has taken its turn:" << endl;
                    ruleCheck(p2, newBoard, userInput, turnNum, compMove, p2.getID());
                    newBoard.updateBoard(userInput, tempToken2);
                    userInput = newBoard.winDeclare(tempToken2, winCon, p2.getName(), newBoard, tie);
                    if(winCon == true && tieCheck == tie){
                        lose++;
                        p2.setWinAmount(lose);
                    }
                }
                tieCheck = tie;
            }
        }
        endGame(newBoard, winCon, turnNum, userInput);
    }
    winOut(tie, p1.getWinAmount(), p2.getWinAmount(), p1.getName(), p2.getName());
    return 0;
}