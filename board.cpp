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

Board& Board::updateBoard(Player&, int){
    return *this;
}

ostream& operator <<(ostream& out, const Board& b){
    for(int i = 0; i < 9; i++){
        out << b.getBoard(i) << " |---| ";
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

void Board::setup(string& n, string& t, int& i){
    cout << "please enter your name: ";
    cin >> n;
    cout << "please enter whether you are x or o (you can get creative though!): ";
    cin >> t;
    i = -2;
}

Board& Board::userMove(int i, int id, string t){
    if(id == 1){
        boardState[i] = t;
    }

    if(id = 2){
        cout << "testing";
    }
    return *this;
}


int Board::winDeclare(string x, bool& w, string name){
    int fullBoard = 0;

    for(int i = 0; i < MAX_SIZE; i++){
        if(boardState[i] != "0"){
            fullBoard++;
        }
    }
    if(boardState[0,1,2] == x){
        cout << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[3,4,5] == x){
        cout << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[6,7,8] == x){
        cout << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[0,3,6] == x){
        cout << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[1,4,7] == x){
        cout << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[2,5,8] == x){
        cout << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[0,4,8] == x){
        cout << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(boardState[2,4,6] == x){
        cout << name << " won!" << endl;
        w = true;
        return -1;
    }
    if(fullBoard > 8){
        cout << "It's a draw!" << endl;
        w = true;
        return -1;
    }
    return -2;
}

void Board::clearBoard(){
    for(int i = 0; i < MAX_SIZE; i++){
        boardState[i] = "0";
    }
}