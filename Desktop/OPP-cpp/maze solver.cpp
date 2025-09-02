#include <iostream>
#include <fstream>
#include <queue>
#include <vector>
#include <string>
#include <stack>

using namespace std;

struct Point {
    int x, y;
};

vector<Point> directions = {{0,1}, {1,0}, {0,-1}, {-1,0}};

bool isValid(int x, int y, const vector<string>& maze, vector<vector<bool>>& visited) {
    return x >= 0 && y >= 0 && x < maze.size() && y < maze[0].size() &&
           maze[x][y] != '#' && !visited[x][y];
}

void printMaze(const vector<string>& maze) {
    for (const auto& row : maze) {
        cout << row << "\n";
    }
}

void solveMaze(vector<string>& maze) {
    int rows = maze.size(), cols = maze[0].size();
    Point start, end;
    vector<vector<Point>> parent(rows, vector<Point>(cols, {-1, -1}));
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));

    // Find start and end
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            if (maze[i][j] == 'S') start = {i, j};
            if (maze[i][j] == 'E') end = {i, j};
        }

    queue<Point> q;
    q.push(start);
    visited[start.x][start.y] = true;

    while (!q.empty()) {
        Point current = q.front(); q.pop();
        if (current.x == end.x && current.y == end.y) break;

        for (auto dir : directions) {
            int nx = current.x + dir.x;
            int ny = current.y + dir.y;

            if (isValid(nx, ny, maze, visited)) {
                visited[nx][ny] = true;
                parent[nx][ny] = current;
                q.push({nx, ny});
            }
        }
    }

    // Backtrack from end to start to mark the path
    Point p = end;
    while (!(p.x == start.x && p.y == start.y)) {
        if (maze[p.x][p.y] != 'E') maze[p.x][p.y] = '*';
        p = parent[p.x][p.y];
    }

    cout << "\nSolved Maze:\n";
    printMaze(maze);
}

int main() {
    ifstream file("maze.txt");
    vector<string> maze;
    string line;

    if (!file) {
        cerr << "Failed to open maze.txt\n";
        return 1;
    }

    while (getline(file, line)) {
        maze.push_back(line);
    }

    solveMaze(maze);
    return 0;
}
