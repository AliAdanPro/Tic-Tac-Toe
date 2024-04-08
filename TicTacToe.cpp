#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = 0;
        }
    }
}

bool TicTacToe::makeMove(int row, int col, int player) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == 0) {
        board[row][col] = player;
        return true;
    }
    return false;
}

bool TicTacToe::isWinner(int player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true; 
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true; 
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true; 
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true; 
    return false;
}

bool TicTacToe::isDraw() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 0)
                return false; 
        }
    }
    return true; 
}

void TicTacToe::printBoard() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 0)
                cout << "- ";
            else if (board[i][j] == 1)
                cout << "1 ";
            else
                cout << "2 ";
        }
        cout << endl;
    }
}
