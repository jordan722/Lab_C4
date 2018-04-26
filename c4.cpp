#include <iostream>
using namespace std;

bool checkWin(string board[6][7]){
  for(int row=5; row >= 0; row--){
    for(int col=0; col < 7; col++){
      cout << col << endl;
      if(board[row][col]=="-"){
        cout << board[row][col] << endl;
      }
      else{
        // Would check for 4 in a row at these locations
        cout << board[row][col] << endl;
      }
    }
  }
  return false;
}

int main(){
  string board[6][7];
  for(int row = 0; row < 6; row++){
    for(int col = 0; col < 7; col++){
      board[row][col] = "-";
    }
  }
  board[0][0] = "a";
  board[5][6] = "b";
  board[0][6] = "c";

  for (int i = 0; i < 6; ++i){
    for (int j = 0; j < 7; ++j){
        std::cout << board[i][j] << ' ';
    }
    std::cout << std::endl;
  }

  checkWin(board);
}
