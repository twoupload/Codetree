/// 작은 구슬의 이동
#include <iostream>
#define MAX 1234567
using namespace std;

int dx[MAX], dy[MAX];

int main()
{
    //freopen("input.txt", "r", stdin);

    int n,t;
    cin >> n >> t;

    int r, c;
    char d;
    cin >> r >> c >> d;

    dx[0] = c, dy[0] = r;

    int dir;

    if(d == 'R') dir = 0;
    else if(d == 'U') dir = 2;
    else if(d == 'D') dir = 1;
    else dir = 3;


    for(int i = 1; i <= t; i++) {
        if((dx[i-1] == 1 && dir == 3) || (dx[i-1] == n && dir == 0)
           || (dy[i-1] == 1 && dir == 2) || (dy[i-1] == n && dir == 1))
        {
            dir = 3 - dir;
            dx[i] = dx[i-1];
            dy[i] = dy[i-1];
        }

        else
        {
            if(dir == 0)
            {
                dx[i] = dx[i-1] + 1;
                dy[i] = dy[i-1];
            }
            else if(dir == 1)
            {
                dx[i] = dx[i-1];
                dy[i] = dy[i-1] - 1;
            }
            else if(dir == 2)
            {
                dx[i] = dx[i-1];
                dy[i] = dy[i-1] + 1;
            }
            else
            {
                dx[i] = dx[i-1] - 1;
                dy[i] = dy[i-1];
            }
        }
    }


    for(int i = 0; i <= t; i++) {
        cout << dy[i] << " " << dx[i] << endl;
    }
    return 0;
}