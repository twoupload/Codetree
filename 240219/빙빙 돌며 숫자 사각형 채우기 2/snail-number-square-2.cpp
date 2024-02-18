#include <iostream>

#define MAX 1001

using namespace std;

int n, m;
int arr[MAX][MAX];

int dx[4] = {1, 0, -1,  0};
int dy[4] = {0, 1,  0, -1};

int cx = 0, cy = 0;
int dir = 0;

bool InRange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < m && arr[x][y] == 0;
}

int main() {

    cin >> n >> m;

    for(int i = 1; i <= n * m; i++) {
        arr[cx][cy] = i;

        int nx = cx + dx[dir], ny = cy + dy[dir];

        if(!InRange(nx, ny)){
            dir = (dir + 1) % 4;
            nx = cx + dx[dir], ny = cy + dy[dir];
        }

        cx = nx; cy = ny;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}