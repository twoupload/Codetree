#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<string>> grid(R, vector<string>(C));
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    int cnt = 0;
    for(int i = 1; i < R; i++) {
        for(int j = 1; j < C; j++) {
            for(int k = i + 1; k < R - 1; k++) {
                for(int l = j + 1; l < C - 1; l++) {
                    if(grid[0][0] != grid[i][j] &&
                       grid[i][j] != grid[k][l] &&
                       grid[k][l] != grid[R - 1][C - 1]) {
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}