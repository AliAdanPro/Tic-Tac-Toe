#include <iostream>
#include "TicTacToe.h"
#include "TicTacToe.cpp"

using namespace std;

int main() {
    TicTacToe game;
    int currentPlayer = 1;
    bool gameover = false;

    while (gameover == false) {
        cout << "Player " << currentPlayer << "'s turn." << endl;
        game.printBoard();

        int row, col;
        cout << "Enter row and column (0-2): ";
        cin >> row >> col;

        if (game.makeMove(row, col, currentPlayer)) {
            if (game.isWinner(currentPlayer)) {
                cout << "Player " << currentPlayer << " wins!" << endl;
                game.printBoard();
                gameover = true;
            } else if (game.isDraw()) {
                cout << "It's a draw!" << endl;
                gameover = true;
            } else {
                if (currentPlayer == 1)
                    currentPlayer = 2;
                else
                    currentPlayer = 1;
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    return 0;
}
