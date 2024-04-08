#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>

class TicTacToe {
private:
    int board[3][3];

public:
    TicTacToe(); 
    bool makeMove(int row, int col, int player);
    bool isWinner(int player);
    bool isDraw();
    void printBoard();
};

#endif
