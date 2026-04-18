#include "board.h"
#define MAX_SIZE 9
Board::Board(){
    boardState = new char[MAX_SIZE];
}

Board::Board(char* bState){
    boardState = new char[MAX_SIZE];
    for(int i = 0; i < MAX_SIZE; i++){
        boardState[i] = bState[i];
    }
}
Board::Board(const Board& rhs){
boardState = new char[MAX_SIZE];
    for(int i = 0; i < MAX_SIZE; i++){
        boardState[i] = rhs.boardState[i];
    }
}

char* Board::getBoard(){
    return boardState;
}

void Board::updateBoard(Player p){
    p.userMove();
}

void Board::updateBoard(Computer c){
    c.userMove();
}

int Board::mainMenu(){

}

ostream& operator<<(ostream& out, Board& b){
    for(int i = 0; i < 9; i++){
        out << b.getBoard()[i];
        if(i == 2, 5, 8){
            out << endl;
        }
    }
    
    return out;
}

Board::~Board(){
    delete [] boardState;
 }

Board& Board::operator =(const Board& b){
    for(int i = 0; i< MAX_SIZE; i++){
        boardState[i] = b.boardState[i];
    }
    return *this;
}