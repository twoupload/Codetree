#include <iostream>
using namespace std;

int board[20][20];
int dx[4] = {1, 0, 1, -1};
int dy[4] = {0, 1, 1, 1};
int w, x, y;

bool isRange(int x, int y)
{
    return x >= 0 && x < 19 && y >= 0 && y < 19;
}

int main() {

    //freopen("input.txt", "r", stdin);
    // 바둑판 상태
    for (int i = 0; i < 19; ++i) {
        for (int j = 0; j < 19; ++j) {
            cin >> board[i][j];
        }
    }

    // 판단
    for (int i = 1; i <= 19; ++i) {
        for (int j = 1; j <= 19; ++j) {
            if (board[i][j] != 0) {
                for (int dir = 0; dir < 4; ++dir) {
                    int cnt = 0;
                    int nx = i, ny = j;

                    while (isRange(nx, ny) && board[nx][ny] == board[i][j]) {
                        cnt++;
                        nx += dx[dir];
                        ny += dy[dir];
                    }

                    if (cnt == 5) {
                        if (isRange(nx - dx[dir], ny - dy[dir]) &&
                            board[nx - dx[dir] * 5][ny - dy[dir] * 5 == board[i][j]]) {
                            continue;
                        }

                        w = board[i][j];
                        x = i + dx[dir] * 2 + 1;
                        y = j + dy[dir] * 2 + 1;
                        break;
                    }
                }
            }
            if (w != 0) break;
        }
        if (w != 0) break;
    }

    cout << w << endl;

    if (w != 0) {
        cout << x << ' ' << y << endl;
    }

    return 0;
}