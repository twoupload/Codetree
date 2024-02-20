#include <iostream>
using namespace std;

char a[101][101];
int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
int x = 1, y = 1, dir;
int r,c,i,j;

bool inRange(int x, int y) {
    return x > 0 && x <= r && y > 0 && y <= c;
}

int main() {
    cin >> r >> c;

    int alp = 65;

    for(i = 1; i <= r * c; i++) {

        a[x][y] = alp;
        if(alp == 90) alp = 65;
        else alp = alp + 1;

        int nx = x + dx[dir], ny = y + dy[dir];

        if(!inRange(nx, ny) || a[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }

        x = x + dx[dir], y = y + dy[dir];
    }

    for(i = 1; i <= r; i++) {
        for(j = 1; j <= c; j++) {
            cout << a[i][j] << " ";
        }
        printf("\n");
    }
    return 0;
}