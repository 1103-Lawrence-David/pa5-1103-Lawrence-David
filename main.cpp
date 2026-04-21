//Author: David Lawrence
//Version: 1.0.0 (frist major working version)
//This version includes a working version of the game, however it does not have the ability to actually enforce the rules of tictactoe. 
//It does unintentionally allow multiplayer supoprt, but no automated computer response. 
//All functions implemented work, but may have to be reworked for the rule implementations.
#include "board.h"
bool validMove(Board, int&);

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
    while(userInput != 0){ 
        while (userInput != 0 && winCon == false){
            cout << newBoard;
            cout << "Please select your move." << endl;
            p1.userMove(userInput);
            
            if(userInput != -1 && userInput != 0){
                newBoard.userMove(userInput, p1.getID(), tempToken);
                userInput = newBoard.winDeclare(tempToken, winCon, p1.getName(), newBoard);
                if(userInput != -1 && userInput != 0){
                    cout << newBoard << endl << "The Computer has taken its turn:" << endl;
                    c1.userMove(userInput);
                    newBoard.userMove(userInput, c1.getID(), tempToken2);
                    userInput = newBoard.winDeclare(tempToken2, winCon, c1.getName(), newBoard);
                }
            }
        }
        cout << "if you would like to play again, please enter any number except 0. If you would like to end the program, please enter 0.";
        cin >> userInput;
        if(userInput != 0){
            newBoard.resetBoard(winCon);
        }
    }
    return 0;
}

bool validMove(Board b, int& i){ //fucked idk what i'm trying to do
    bool valid = false;
    while(valid == false){
        ;
    }
}