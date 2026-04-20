#include "board.h"


int main(){
    bool winCon = false;
    string tempString, tempToken, tempToken2;
    int userInput;
    Board newBoard;
    
    newBoard.setup(tempString, tempToken, userInput);
        
    Player p1(-1, tempToken, tempString, 1, winCon);
    if(tempToken == "o" || tempToken == "O"){
        tempToken2 = "X";
    }
    else{
        tempToken2 = "O";
    }
    
    Computer c1(-1, tempToken2, "Computer", 2, winCon);
    while(userInput != 0){ // not working
        while (userInput != 0 || winCon == false){
            cout << newBoard;
            cout << "Please select your move." << endl;
            p1.userMove(userInput);
            
            if(userInput != -1){
                newBoard.userMove(userInput, p1.getID(), tempToken);
                userInput = newBoard.winDeclare(tempToken, winCon, p1.getName());
                if(userInput != -1){
                    cout << newBoard << endl << "The Computer has taken its turn:" << endl;
                    newBoard.userMove(userInput, c1.getID(), tempToken2);
                    userInput = newBoard.winDeclare(tempToken2, winCon, c1.getName());
                }
            }
        }
        cout << "if you would like to play again, please enter any number except 0. If you would like to end the program, please enter 0.";
        cin >> userInput;
        if(userInput != 0){
            newBoard.clearBoard();
        }
    }
    return 0;
}