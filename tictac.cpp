#include <bits/stdc++.h>
using namespace std;
void printBoard(const vector<vector<char> >& board){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool checkWin(const vector<vector<char> >& board, char player) {
    for(int i=0;i<3;i++){
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player){
            return true;
        }
    }
    for(int i=0;i<3;i++){
        if(board[0][i]==player && board[1][i]==player && board[2][i]==player){
            return true;
        }
    }

    if(board[0][0]==player && board[1][1]==player && board[2][2]==player){
        return true;
    }
    if(board[0][2]==player && board[1][1]==player && board[2][0]==player){
        return true;
    }
    return false;
}
void play(){
    vector<vector<char> > board(3,vector<char>(3,'-'));
    char currentPlayer='X';
    int row,col;

    while (true){
        printBoard(board);
        cout<<"Player "<<currentPlayer<<", enter your move (row and column): ";
        cin>>row>>col;
        if(board[row][col]!='-'){
            cout<<"Invalid move! Please try again."<<endl;
            continue;
        }
        board[row][col]=currentPlayer;
        if(checkWin(board,currentPlayer)){
            cout<<"Player "<<currentPlayer<<" wins!"<<endl;
            printBoard(board);
            break;
        }
        
        bool isBoardFull=true;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]=='-'){
                    isBoardFull=false;
                    break;
                }
            }
        }
        if(isBoardFull){
            cout<<"It's a draw!"<<endl;
            break;
        }
        currentPlayer=(currentPlayer=='X')?'O':'X';
    }
}

int main(){ 
    play();
    return 0;
}