#include <iostream>
using namespace std;

int main() {
    int board[19][19];
    int dx[4] = {1, 0, 1, -1};
    int dy[4] = {0, 1, 1, 1};
    int winner = 0, x = 0, y = 0;

    // 바둑판 상태 입력
    for (int i = 0; i < 19; ++i) {
        for (int j = 0; j < 19; ++j) {
            cin >> board[i][j];
        }
    }

    // 승부 판단
    for (int i = 0; i < 19; ++i) {
        for (int j = 0; j < 19; ++j) {
            if (board[i][j] != 0) {
                for (int dir = 0; dir < 4; ++dir) {
                    int cnt = 0;
                    int nx = i, ny = j;
                    
                    while (nx >= 0 && ny >= 0 && nx < 19 && ny < 19 && board[nx][ny] == board[i][j]) {
                        cnt++;
                        nx += dx[dir];
                        ny += dy[dir];
                    }
                    
                    if (cnt == 5) {
                        if (nx - dx[dir] * 5 >= 0 && ny - dy[dir] * 5 >= 0 && nx - dx[dir] * 5 < 19 && ny - dy[dir] * 5 < 19 && board[nx - dx[dir] * 5][ny - dy[dir] * 5 == board[i][j]]) {
                            continue;
                        }
                        winner = board[i][j];
                        x = i + dx[dir] * 2 + 1;
                        y = j + dy[dir] * 2 + 1;
                        break;
                    }
                }
            }
            if (winner != 0) break;
        }
        if (winner != 0) break;
    }

    cout << winner << endl;
    if (winner != 0) {
        cout << x << ' ' << y << endl;
    }

    return 0;
}