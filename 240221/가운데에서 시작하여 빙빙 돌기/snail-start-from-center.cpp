#include <iostream>
#include <vector>

using namespace std;

bool in_range(int x, int y, int n) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

pair<int, int> move(int dir_now) {
    if (dir_now == 0) {
        return {0, 1};
    }
    else if (dir_now == 1) {
        return {-1, 0};
    }
    else if (dir_now == 2) {
        return {0, -1};
    }
    else {
        return {1, 0};
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> array(n, vector<int>(n, 0));

    int dir_state = 3;

    int step = 1;
    int x = (n-1)/2;
    int y = (n-1)/2;
    int i = 0;

    array[x][y] = 1;

    while (true) {
        int dir_state_left = dir_state + 1;
        pair<int, int> l_move = move(dir_state_left % 4);
        int lx = x + l_move.first;
        int ly = y + l_move.second;

        if (n != 1 && array[lx][ly] == 0) {
            dir_state += 1;
        }

        pair<int, int> dir_move = move(dir_state % 4);

        if (in_range(x + dir_move.first, y + dir_move.second, n) == true && array[x+dir_move.first][y+dir_move.second] == 0) {
            x += dir_move.first;
            y += dir_move.second;
            step += 1;
        }

        array[x][y] = step;
        if (step >= n*n) {
            break;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}