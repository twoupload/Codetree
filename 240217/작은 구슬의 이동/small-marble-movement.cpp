/// 작은 구슬의 이동
#include <iostream>

using namespace std;

int dx[101], dy[101];
int n,t,r,c,dir,cnt;
int i;
char d;

int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> n >> t;
    cin >> r >> c >> d;

    dx[0] = c, dy[0] = r;

    if(d == 'U') dir = 2;
    else if(d == 'D') dir = 1;
    else if(d == 'R') dir = 0;
    else dir = 3;

    for(i = 1; i <= t; i++)
    {
        if( (dir == 3 && dx[i-1] == 1) ||
            (dir == 0 && dx[i-1] == 4) ||
            (dir == 2 && dy[i-1] == 1) ||
            (dir == 1 && dy[i-1] == 4) ) {
                dir = 3 - dir;
                dx[i] = dx[i-1];
                dy[i] = dy[i-1];
            }

        else
        {
            if(dir == 0) {
                dx[i] = dx[i-1] + 1;
                dy[i] = dy[i-1];
            }
            else if(dir == 1) {
                dx[i] = dx[i-1];
                dy[i] = dy[i-1] - 1;
            }
            else if(dir == 2) {
                dx[i] = dx[i-1];
                dy[i] = dy[i-1] + 1;
            }
            else {
                dx[i] = dx[i-1] - 1;
                dy[i] = dy[i-1];
            }
        }
    }

    cout << dy[t] << " " << dx[t];

    return 0;
}