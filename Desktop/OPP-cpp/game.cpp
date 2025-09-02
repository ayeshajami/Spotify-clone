// tictactoe.cpp
#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int turn = 1;

void drawBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        if (i < 2) cout << "\n---+---+---\n";
    }
    cout << "\n";
}

bool checkWin() {
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
    for (int i = 0; i < 3; i++)
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    return false;
}

void playTurn() {
    int move;
    cout << "Player " << turn << ", enter your move: ";
    cin >> move;
    char mark = (turn == 1) ? 'X' : 'O';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == move + '0')
                board[i][j] = mark;
    turn = 3 - turn;
}

int main() {
    int moves = 0;
    while (true) {
        drawBoard();
        playTurn();
        moves++;
        if (checkWin()) {
            drawBoard();
            cout << "Player " << (3 - turn) << " wins!\n";
            break;
        }
        if (moves == 9) {
            drawBoard();
            cout << "It's a draw!\n";
            break;
        }
    }
    return 0;
}
