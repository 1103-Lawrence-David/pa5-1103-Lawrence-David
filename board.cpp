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
    i=3;
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

Board& Board::updateBoard(int i, int id, string t){
    if(i == 0){
        return *this;
    }

    if(id == 1){
        boardState[i-1] = t;
    }

    if(id = 2){
        boardState[i-1] = t;
    }
    return *this;
}


int Board::winDeclare(string x, bool& w, string name, Board b){ //the program works though! except there's no rules since idk how to implement them yet but
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
        w = true;
        return -1;
    }
    return -2;
}

void Board::resetBoard(bool& w){
    for(int i = 0; i < MAX_SIZE; i++){
        boardState[i] = "0";
    }
    w = false;
}
