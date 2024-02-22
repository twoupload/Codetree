#include <iostream>

using namespace std;

int a[101][101];
int n,m;
int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

bool isRange(int x, int y)
{
    return x > 0 && x <= n && y > 0 && y <= n;
}

int f(int x, int y)
{

    int cnt = 0;
    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if(isRange(nx, ny) && a[nx][ny] == 1) cnt++;
    }

    if(cnt >= 3) return 1;
    else return 0;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> n >> m;

    for(int i = 1; i <= m; i++)
    {
        int r, c;
        cin >> r >> c;

        a[r][c] = 1;

        cout << f(r, c) << endl;

    }

    return 0;
}