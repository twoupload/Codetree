#include <iostream>

using namespace std;

int n,t,s,dir,cnt;
int a[101][101], dx[4] = {-1,0,1,0}, dy[4] = {0,1,0,-1};
char c[100001];

bool isRange(int x, int y)
{
    return x > 0 && x <= n && y > 0 && y <= n;
}

int main()
{
   //freopen("input.txt", "r", stdin);
    cin >> n >> t;

    for(int i = 0; i < t; i++) {
        cin >> c[i];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    int x = n / 2 + 1, y = n / 2 + 1;
    cnt = a[x][y];

    for(int i = 0; i < t; i++) {
        if(c[i] == 'L')
        {
            if(dir == 0) dir = 3;
            else dir = (dir - 1) % 4;
        }
        else if(c[i] == 'R')
            dir = (dir + 1) % 4;
        else
        {
            int nx = x + dx[dir], ny = y + dy[dir];
            if(isRange(nx, ny))
            {
                x = nx, y = ny;
                cnt += a[x][y];
            }
        }
    }

    cout << cnt;
    return 0;
}