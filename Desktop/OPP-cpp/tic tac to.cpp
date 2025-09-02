#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void drawBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        if (i < 2) cout << "\n-----------\n";
    }
    cout << "\n";
}

bool checkWin(char symbol) {
    for (int i = 0; i < 3; i++)
        if ((board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) ||
            (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol))
            return true;
    if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
        (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol))
        return true;
    return false;
}

void playGame() {
    int move;
    char player = 'X';
    for (int turn = 0; turn < 9; turn++) {
        drawBoard();
        cout << "Player " << player << ", enter move (1-9): ";
        cin >> move;
        int r = (move - 1) / 3;
        int c = (move - 1) % 3;
        if (board[r][c] == 'X' || board[r][c] == 'O') {
            cout << "Cell already taken! Try again.\n";
            turn--;
            continue;
        }
        board[r][c] = player;
        if (checkWin(player)) {
            drawBoard();
            cout << "Player " << player << " wins!\n";
            return;
        }
        player = (player == 'X') ? 'O' : 'X';
    }
    drawBoard();
    cout << "It's a draw!\n";
}

int main() {
    playGame();
    return 0;
}
