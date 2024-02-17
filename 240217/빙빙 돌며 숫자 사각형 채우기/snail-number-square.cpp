#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> arr(n, vector<int>(m, 0));
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    
    auto in_range = [&](int x, int y) {
        return 0 <= x && x < n && 0 <= y && y < m;
    };
    
    int x = 0, y = 0;
    int dir_num = 0;
    arr[x][y] = 1;
    
    for(int i = 2; i <= n * m; i++) {
        int nx = x + dx[dir_num], ny = y + dy[dir_num];
        
        if(!in_range(nx, ny) || arr[nx][ny] != 0) {
            dir_num = (dir_num + 1) % 4;
        }
        
        x += dx[dir_num], y += dy[dir_num];
        arr[x][y] = i;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}