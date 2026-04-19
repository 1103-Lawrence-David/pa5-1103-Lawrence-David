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

int Board::mainMenu(){
    return 0;
}

ostream& operator <<(ostream& out, const Board& b){
    for(int i = 0; i < 9; i++){
        out << b.getBoard(i);
        if(i % 3 == 2){
            out << endl;
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