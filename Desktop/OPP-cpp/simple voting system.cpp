#include <iostream>
using namespace std;

class Vote {
    static int candidate1, candidate2;

public:
    static void castVote(int choice) {
        if (choice == 1) candidate1++;
        else if (choice == 2) candidate2++;
    }

    static void showResults() {
        cout << "Candidate 1: " << candidate1 << " votes\n";
        cout << "Candidate 2: " << candidate2 << " votes\n";
    }
};

int Vote::candidate1 = 0;
int Vote::candidate2 = 0;

int main() {
    int choice;
    for (int i = 0; i < 5; i++) {
        cout << "Vote for (1 or 2): ";
        cin >> choice;
        Vote::castVote(choice);
    }

    cout << "\nVoting Results:\n";
    Vote::showResults();

    return 0;
}
