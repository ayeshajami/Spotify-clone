// file_io.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream writeFile("data.txt");
    writeFile << "This is data written to a file.\n";
    writeFile.close();

    ifstream readFile("data.txt");
    string line;
    cout << "Reading from file:\n";
    while (getline(readFile, line)) {
        cout << line << endl;
    }
    readFile.close();
    return 0;
}
