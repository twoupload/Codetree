#include <iostream>
#define MAX 1234567
using namespace std;

int i,j;
int dx[MAX],dy[MAX];

int main()
{
    //freopen("input.txt", "r", stdin);
    int n,cnt = 1;
    cin >> n;

    for(i = 1; i <= 6; i++) {
        char d;
        int m;
        cin >> d >> m;

        for(j = cnt; j < cnt + m; j++) {
            if(d == 'N') {
                dx[j] = dx[j-1];
                dy[j] = dy[j-1] + 1;
            }
            else if(d == 'S') {
                dx[j] = dx[j-1];
                dy[j] = dy[j-1] -1;
            }
            else if(d == 'W') {
                dx[j] = dx[j-1] - 1;
                dy[j] = dy[j-1];
            }
            else {
                dx[j] = dx[j-1] + 1;
                dy[j] = dy[j-1];
            }
        }
        cnt = cnt + m;
    }

    for(i = 1; i < cnt; i++) {
        if(dx[i] == 0 && dy[i] == 0) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}