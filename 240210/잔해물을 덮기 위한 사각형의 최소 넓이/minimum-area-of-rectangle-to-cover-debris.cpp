#include <iostream>
#define OFFSET 1000

using namespace std;

int i,j,t;
int a[3001][3001];
int x,x2,y,y2,lx,ly;
int xx = -9999, temp, k;
int lenY[3001], yy;

int main()
{
    //freopen("input.txt", "r", stdin);

    for(i = 1; i <= 2; i++) {
        cin >> x >> y >> x2 >> y2;

        lx = (x2 + OFFSET) - (x + OFFSET);
        ly = (y2 + OFFSET) - (y + OFFSET);

        if(i == 1) {
            for(j = y + OFFSET; j < ly + OFFSET + y; j++) {
                for(t = x + OFFSET; t < x + OFFSET + lx; t++) {
                    a[j][t] = 1;
                }
            }
        }
        else {
            for(j = y + OFFSET; j < y + OFFSET + ly; j++) {
                for(t = x + OFFSET; t < x + OFFSET + lx; t++) {
                    a[j][t] = 0;
                }
            }
        }

    }

    for(i = 0; i <= 2001; i++) {
        for(j = 0; j <= 2001; j++) {
            if(a[i][j] == 1) {
                temp++;
                lenY[k++] = i;
            }
        }
        if(temp > xx) {
            xx = temp;
        }
        temp = 0;
    }

    int cnt = 0;
    int temp2 = lenY[cnt];

    while(temp2 != 0) {
        cnt += 1;
        temp2 = lenY[cnt];

    }

    yy = lenY[cnt - 1] - lenY[0] + 1;

    cout << xx * yy;
    return 0;
}