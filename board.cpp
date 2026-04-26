#include "board.h" 
#define MAX_SIZE 9
Board::Board(){
    boardState = new string[MAX_SIZE];
    for(int i = 0; i < MAX_SIZE; i++){
        boardState[i] = "0";
    }
}

Board::Board(string* bState){
    boardState = new string[MAX_SIZE];
    for(int i = 0; i < MAX_SIZE; i++){
        boardState[i] = bState[i];
    }
}
Board::Board(const Board& rhs){
    boardState = new string[MAX_SIZE];
    for(int i = 0; i < MAX_SIZE; i++){
        boardState[i] = rhs.boardState[i];
    }
}

string Board::getBoard(const int i) const{
    return boardState[i];
}

void Board::userMove(int& i){
    cout << endl << "This is a game of tic tac toe. Your goal is to get three in a row before your opponent does." << endl;
    cout << "If your opponent gets three in a row before you, however, they will win instead." << endl;
    cout << endl << "Rules:" << endl << "1: You may only place one piece per turn." << endl << "2. Once a piece is placed, you may not move or change that spot on the board until the game is over." << endl;
    cout << "3. Once the player or Computer has gotten three in a row, either horizontally, vertically, or diagonally, the game ends and the player with three in a row wins that round" << endl;
    cout << endl << "If you understand these rules, please enter 1. If you do not understand the rules and would like to exit the program, please enter 0. ";
    cin >> i;
    while(i != 1 && i != 0){
        cout << "Please enter 1 to continue the program, or 0 to exit it." << endl;
        cin >> i;
    }
}

ostream& operator <<(ostream& out, const Board& b){
    for(int i = 0; i < 9; i++){
        out << "-|| " << b.getBoard(i) << " ||-";
        if(i % 3 == 2){
            out << endl << "---------------------" << endl;
        }
    }
    
    return out;
}

Board::~Board(){
    delete [] boardState;
 }

Board& Board::operator =(const Board& b){
    boardState = new string[MAX_SIZE];
    for(int i = 0; i< MAX_SIZE; i++){
        boardState[i] = b.boardState[i];
    }
    return *this;
}

Board& Board::updateBoard(int i, int id, string t){
    if(i == 0){
        return *this;
    }
    boardState[i-1] = t;
    return *this;
}


int Board::winDeclare(string x, bool& w, string name, Board b, int& t){
    int fullBoard = 0;

    for(int i = 0; i < MAX_SIZE; i++){
        if(boardState[i] != "0"){
            fullBoard++;
        }
    }
    if(boardState[0] == x && boardState[1] == x && boardState[2] == x){
        cout << b << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[3] == x && boardState[4] == x && boardState[5] == x){
        cout << b << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[6] == x && boardState[7] == x && boardState[8] == x){
        cout << b << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[0] == x && boardState[3] == x && boardState[6] == x){
        cout << b << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[1] == x && boardState[4] == x && boardState[7] == x){
        cout << b << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[2] == x && boardState[5] == x && boardState[8] == x){
        cout << b << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[0] == x && boardState[4] == x && boardState[8] == x){
        cout << b << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[2] == x && boardState[4] == x && boardState[6] == x){
        cout << b << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(fullBoard > 8){
        cout << b << "It's a draw!" << endl;
        t++;
        w = true;
        return -1;
    }
    return -2;
}

void Board::resetBoard(bool& w){
    string* tempBoard = new string[MAX_SIZE];
    for(int i = 0; i < MAX_SIZE; i++){
        tempBoard[i] = "0";
    }
    delete [] boardState;
    boardState = tempBoard;
    w = false;
}
