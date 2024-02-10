#include <iostream>
#define OFFSET 1000

using namespace std;

int i,j,t;
int a[3001][3001];
int x,x2,y,y2,lx,ly;
int lenX = -9999, temp, temp2, k, kk, c;
int lenY[3001];

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
        if(temp > lenX) {
            lenX = temp;
        }
        temp = 0;
    }

    kk = lenY[0];
    for(i = 1; i <= 100; i++) {
        if(lenY[i] != kk){
            c++;
            kk = lenY[i];
        }
    }

    cout << lenX * c;
    return 0;
}