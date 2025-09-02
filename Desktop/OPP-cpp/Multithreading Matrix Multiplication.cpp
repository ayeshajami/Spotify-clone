#include <iostream>
#include <vector>
#include <thread>

using namespace std;

void multiplyRow(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& C, int row) {
    for (int col = 0; col < B[0].size(); ++col) {
        C[row][col] = 0;
        for (int i = 0; i < A[0].size(); ++i) {
            C[row][col] += A[row][i] * B[i][col];
        }
    }
}

int main() {
    // Example matrices
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{5, 6}, {7, 8}};
    int rows = A.size();
    int cols = B[0].size();

    // Resultant matrix
    vector<vector<int>> C(rows, vector<int>(cols, 0));

    vector<thread> threads;

    for (int i = 0; i < rows; ++i) {
        threads.push_back(thread(multiplyRow, ref(A), ref(B), ref(C), i));
    }

    // Join threads
    for (auto& th : threads) {
        th.join();
    }

    // Display the result
    cout << "Resultant Matrix C:" << endl;
    for (const auto& row : C) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
