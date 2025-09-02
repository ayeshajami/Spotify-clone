#include <iostream>
#include <limits>
using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE];

void initBoard() {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            board[i][j] = ' ';
}

void printBoard() {
    cout << "\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << "\n";
        if (i < SIZE - 1) cout << "--+---+--\n";
    }
    cout << "\n";
}

bool isMovesLeft() {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            if (board[i][j] == ' ')
                return true;
    return false;
}

char checkWinner() {
    // Rows & Columns
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] != ' ' &&
            board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
        if (board[0][i] != ' ' &&
            board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
    }

    // Diagonals
    if (board[0][0] != ' ' &&
        board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if (board[0][2] != ' ' &&
        board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    return ' ';
}

int minimax(bool isMax) {
    char winner = checkWinner();
    if (winner == 'O') return 10;
    if (winner == 'X') return -10;
    if (!isMovesLeft()) return 0;

    int best = isMax ? -1000 : 1000;

    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            if (board[i][j] == ' ') {
                board[i][j] = isMax ? 'O' : 'X';
                int score = minimax(!isMax);
                board[i][j] = ' ';
                best = isMax ? max(best, score) : min(best, score);
            }

    return best;
}

pair<int, int> bestMove() {
    int bestVal = -1000;
    pair<int, int> move = {-1, -1};

    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            if (board[i][j] == ' ') {
                board[i][j] = 'O';
                int moveVal = minimax(false);
                board[i][j] = ' ';
                if (moveVal > bestVal) {
                    move = {i, j};
                    bestVal = moveVal;
                }
            }

    return move;
}

void playerMove() {
    int row, col;
    while (true) {
        cout << "Enter your move (row and column: 1-3 1-3): ";
        cin >> row >> col;
        --row; --col;
        if (row >= 0 && col >= 0 && row < SIZE && col < SIZE && board[row][col] == ' ') {
            board[row][col] = 'X';
            break;
        }
        cout << "Invalid move. Try again.\n";
    }
}

int main() {
    initBoard();
    cout << "Tic-Tac-Toe: You = X, AI = O\n";
    printBoard();

    while (true) {
        playerMove();
        printBoard();
        if (checkWinner() == 'X') {
            cout << "You win!\n";
            break;
        }
        if (!isMovesLeft()) {
            cout << "It's a draw!\n";
            break;
        }

        auto ai = bestMove();
        board[ai.first][ai.second] = 'O';
        cout << "AI plays:\n";
        printBoard();
        if (checkWinner() == 'O') {
            cout << "AI wins!\n";
            break;
        }
        if (!isMovesLeft()) {
            cout << "It's a draw!\n";
            break;
        }
    }

    return 0;
}
